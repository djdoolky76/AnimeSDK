#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFeverTimeTutorialRow; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D361580)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D360F40)

namespace RPG::GameCore
{
	class ActivityFeverTimeTutorialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendAvatarList; // 0x10
		::System::UInt32 TutorialID; // 0x18
		::System::UInt32 P2AvailableBuffID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFeverTimeTutorialRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFeverTimeTutorialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
