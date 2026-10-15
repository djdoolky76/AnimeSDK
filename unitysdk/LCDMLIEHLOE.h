#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class LCDMLIEHLOE;
namespace SimpleJSON { class JSONNode; }

#define LCDMLIEHLOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D77F0)
#define LCDMLIEHLOE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D0D7970)
#define LCDMLIEHLOE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D0D7940)
#define LCDMLIEHLOE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0D7800)
#define LCDMLIEHLOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D77C0)

inline static constexpr unsigned int LCDMLIEHLOE_TypeDefinitionIndex = 24100;

	class LCDMLIEHLOE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDMLIEHLOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LCDMLIEHLOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LCDMLIEHLOE*))((::PBYTE)hIl2Cpp + LCDMLIEHLOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LCDMLIEHLOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LCDMLIEHLOE*))((::PBYTE)hIl2Cpp + LCDMLIEHLOE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::LCDMLIEHLOE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LCDMLIEHLOE*))((::PBYTE)hIl2Cpp + LCDMLIEHLOE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::LCDMLIEHLOE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LCDMLIEHLOE*))((::PBYTE)hIl2Cpp + LCDMLIEHLOE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
