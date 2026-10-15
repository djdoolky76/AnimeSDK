#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamNormalActionSwitch; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D501500)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D501680)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D501650)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D501510)
#define RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5014D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamNormalActionSwitch_TypeDefinitionIndex = 20014;

	class ByPamNormalActionSwitch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTIONSWITCH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
