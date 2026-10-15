#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCheckFarmElementActive; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D360F60)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D361120)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3610F0)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D360F70)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D360F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckFarmElementActive_TypeDefinitionIndex = 22261;

	class AdvByCheckFarmElementActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
