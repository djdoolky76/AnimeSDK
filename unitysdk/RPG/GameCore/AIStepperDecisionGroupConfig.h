#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class AIStepperDecisionGroupConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D338BD0)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D338BE0)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33B210)
#define RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_PLEANBGKLHC_OFFSET UNITYSDK_OFFSET(0x1D33B250)

namespace RPG::GameCore
{
	class AIStepperDecisionGroupConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionGroupName; // 0x28
		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* DecisionList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIStepperDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIStepperDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIStepperDecisionGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIStepperDecisionGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* PLEANBGKLHC()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISTEPPERDECISIONGROUPCONFIG_PLEANBGKLHC_OFFSET))(this);
		}

	};
}
