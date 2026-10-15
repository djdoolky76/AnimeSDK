#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_TargetCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_TARGETCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5A2C0)
#define RPG_GAMECORE_VE_TARGETCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC5A4C0)
#define RPG_GAMECORE_VE_TARGETCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC5A490)
#define RPG_GAMECORE_VE_TARGETCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5A2D0)
#define RPG_GAMECORE_VE_TARGETCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5A290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_TargetCount_TypeDefinitionIndex = 24045;

	class VE_TargetCount : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_TARGETCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
