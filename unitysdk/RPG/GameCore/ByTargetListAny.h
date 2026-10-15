#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetListAny; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTANY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50FB70)
#define RPG_GAMECORE_BYTARGETLISTANY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50FD70)
#define RPG_GAMECORE_BYTARGETLISTANY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50FD40)
#define RPG_GAMECORE_BYTARGETLISTANY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50FB80)
#define RPG_GAMECORE_BYTARGETLISTANY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50FB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListAny_TypeDefinitionIndex = 23798;

	class ByTargetListAny : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
