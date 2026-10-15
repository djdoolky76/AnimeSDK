#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIDecisionBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AIDECISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3389A0)
#define RPG_GAMECORE_AIDECISIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3389B0)
#define RPG_GAMECORE_AIDECISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3392D0)
#define RPG_GAMECORE_AIDECISIONCONFIG_PLEANBGKLHC_OFFSET UNITYSDK_OFFSET(0x1D339310)

namespace RPG::GameCore
{
	class AIDecisionConfig : public ::RPG::GameCore::AIDecisionBaseConfig
	{
	public:
		::System::String* DecisionName; // 0x28
		::RPG::GameCore::TaskConfig* RootTask; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* PLEANBGKLHC()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONCONFIG_PLEANBGKLHC_OFFSET))(this);
		}

	};
}
