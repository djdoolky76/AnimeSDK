#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AuthoritySide.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareEntityAuthoritySide; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47B0B0)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D47B270)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D47B240)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D47B0C0)
#define RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D47B080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEntityAuthoritySide_TypeDefinitionIndex = 22314;

	class ByCompareEntityAuthoritySide : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AuthoritySide CompareValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENTITYAUTHORITYSIDE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
