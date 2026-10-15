#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AIDECISIONUNITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3392C0)
#define RPG_GAMECORE_AIDECISIONUNITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3396A0)
#define RPG_GAMECORE_AIDECISIONUNITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3394D0)
#define RPG_GAMECORE_AIDECISIONUNITCONFIG_PLEANBGKLHC_OFFSET UNITYSDK_OFFSET(0x1D339700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIDecisionUnitConfig_TypeDefinitionIndex = 15480;

	class AIDecisionUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIDecisionUnitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIDecisionUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>* PLEANBGKLHC()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AIDecisionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIDECISIONUNITCONFIG_PLEANBGKLHC_OFFSET))(this);
		}

	};
}
