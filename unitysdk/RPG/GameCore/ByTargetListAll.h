#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetListAll; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53CEA0)
#define RPG_GAMECORE_BYTARGETLISTALL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D53D0A0)
#define RPG_GAMECORE_BYTARGETLISTALL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D53D070)
#define RPG_GAMECORE_BYTARGETLISTALL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D53CEB0)
#define RPG_GAMECORE_BYTARGETLISTALL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53CE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListAll_TypeDefinitionIndex = 23799;

	class ByTargetListAll : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
