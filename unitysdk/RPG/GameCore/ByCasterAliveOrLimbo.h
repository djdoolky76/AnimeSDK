#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCasterAliveOrLimbo; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45BA60)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D45BC20)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D45BBF0)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45BA70)
#define RPG_GAMECORE_BYCASTERALIVEORLIMBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45BA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCasterAliveOrLimbo_TypeDefinitionIndex = 23486;

	class ByCasterAliveOrLimbo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCASTERALIVEORLIMBO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
