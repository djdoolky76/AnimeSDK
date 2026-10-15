#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace RPG::GameCore { class SingleAnimEntry; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEANIMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEB0B0)
#define RPG_GAMECORE_SINGLEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEAD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleAnimEventConfig_TypeDefinitionIndex = 16291;

	class SingleAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorStateName; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::AnimParamRangeEntry* CompareParam; // 0x20
		::Il2CppArray<::RPG::GameCore::SingleAnimEntry*>* AnimatorStates; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EventList; // 0x30
		::System::Boolean OnlyTriggerInFirstLoop; // 0x38
		::System::Boolean AllowTriggeringOnTransitionIn; // 0x39
		::System::Boolean AllowTriggeringOnTransitionOut; // 0x3A
		::System::Boolean ForceTrigger; // 0x3B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
