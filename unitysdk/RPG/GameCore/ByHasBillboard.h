#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasBillboard; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASBILLBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C9D80)
#define RPG_GAMECORE_BYHASBILLBOARD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C9FA0)
#define RPG_GAMECORE_BYHASBILLBOARD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C9F40)
#define RPG_GAMECORE_BYHASBILLBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C9DC0)
#define RPG_GAMECORE_BYHASBILLBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C9D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasBillboard_TypeDefinitionIndex = 22425;

	class ByHasBillboard : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
