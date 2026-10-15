#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFeverTimeTutorialRow; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D333AB0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMETUTORIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D333470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeTutorialRow_TypeDefinitionIndex = 11591;

	class ActivityFeverTimeTutorialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommendAvatarList; // 0x10
		::System::UInt32 P2AvailableBuffID; // 0x18
		::System::UInt32 TutorialID; // 0x1C
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
