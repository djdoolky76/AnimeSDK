#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsForbidChangeOthersActionDelay; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D515230)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D515480)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D515450)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D515240)
#define RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D515200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsForbidChangeOthersActionDelay_TypeDefinitionIndex = 23279;

	class ByIsForbidChangeOthersActionDelay : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ActionDelayTargetType; // 0x28
		::RPG::GameCore::ActionDelayChangeTypeMask ChangeType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFORBIDCHANGEOTHERSACTIONDELAY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
