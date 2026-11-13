#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoEntranceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6B30)
#define RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DEC6950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoEntranceConfigRow_TypeDefinitionIndex = 12855;

	class AvatarDemoEntranceConfigRow : public ::System::Object
	{
	public:
		::System::String* TrialRoleAvatarBackPath; // 0x10
		::System::String* TrialRoleAvatarPath; // 0x18
		::System::String* TrialRoleAvatarFrontPath; // 0x20
		::System::UInt32 AvatarID; // 0x28
		::System::UInt32 StageID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDemoEntranceConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDemoEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOENTRANCECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
