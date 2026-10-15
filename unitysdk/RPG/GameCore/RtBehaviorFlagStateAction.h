#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA50980)
#define RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA50800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBehaviorFlagStateAction_TypeDefinitionIndex = 17643;

	class RtBehaviorFlagStateAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtBehaviorFlag Flag; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnActive; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDeactive; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBehaviorFlagStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBehaviorFlagStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBEHAVIORFLAGSTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
