#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DD810)
#define RPG_GAMECORE_BYCOMPARETARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DDA70)
#define RPG_GAMECORE_BYCOMPARETARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DDA30)
#define RPG_GAMECORE_BYCOMPARETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DD820)
#define RPG_GAMECORE_BYCOMPARETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DD7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTarget_TypeDefinitionIndex = 23014;

	class ByCompareTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareType; // 0x28
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
