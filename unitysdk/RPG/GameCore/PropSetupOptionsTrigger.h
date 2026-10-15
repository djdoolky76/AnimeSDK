#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropSetupOptionsTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9553B0)
#define RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9553E0)
#define RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D955360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupOptionsTrigger_TypeDefinitionIndex = 21593;

	class PropSetupOptionsTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DestroyAfterTriggered; // 0x18
		::System::Boolean DisableAfterTriggered; // 0x19
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* OptionList; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupOptionsTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupOptionsTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupOptionsTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupOptionsTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPOPTIONSTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
