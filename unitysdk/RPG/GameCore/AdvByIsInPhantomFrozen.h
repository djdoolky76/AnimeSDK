#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByIsInPhantomFrozen; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D396DB0)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D396F70)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D396F40)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D396DC0)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D396D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsInPhantomFrozen_TypeDefinitionIndex = 20594;

	class AdvByIsInPhantomFrozen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
