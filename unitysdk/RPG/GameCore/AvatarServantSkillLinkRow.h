#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarServantSkillLinkRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D426E90)
#define RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D426CA0)

namespace RPG::GameCore
{
	class AvatarServantSkillLinkRow : public ::System::Object
	{
	public:
		::System::String* TarotIconPath; // 0x10
		::System::String* TarotFigurePath; // 0x18
		::System::UInt32 LinkToAvatarID; // 0x20
		::System::UInt32 Order; // 0x24
		::System::UInt32 SkillID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarServantSkillLinkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarServantSkillLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLLINKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
