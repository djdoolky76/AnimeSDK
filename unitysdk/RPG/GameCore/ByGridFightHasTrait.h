#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByGridFightHasTrait; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C8050)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C8300)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C82C0)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C8060)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C8010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightHasTrait_TypeDefinitionIndex = 22523;

	class ByGridFightHasTrait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* TeamTrait; // 0x28
		::System::Boolean IncludeOtherEffect; // 0x30
		::System::Boolean IncludeInactiveTrait; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
