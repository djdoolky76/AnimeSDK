#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByEntityExist; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYENTITYEXIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3946C0)
#define RPG_GAMECORE_ADVBYENTITYEXIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D394880)
#define RPG_GAMECORE_ADVBYENTITYEXIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D394850)
#define RPG_GAMECORE_ADVBYENTITYEXIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3946D0)
#define RPG_GAMECORE_ADVBYENTITYEXIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D394690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByEntityExist_TypeDefinitionIndex = 22242;

	class AdvByEntityExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
