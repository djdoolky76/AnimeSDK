#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAlertValueInRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYALERTVALUEINRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D480F00)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D481140)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D481110)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D480F10)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D480ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAlertValueInRange_TypeDefinitionIndex = 20035;

	class ByAlertValueInRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single AlertValueMin; // 0x28
		::System::Single AlertValueMax; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
