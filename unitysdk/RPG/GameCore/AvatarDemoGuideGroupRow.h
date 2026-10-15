#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoGuideGroupRow; }

#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D411210)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D410BD0)

namespace RPG::GameCore
{
	class AvatarDemoGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IndexList; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDemoGuideGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDemoGuideGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
