#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
class FCOEMCEDLNL;
class PCAPHLBJNIA;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define PCAPHLBJNIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C99B0)
#define PCAPHLBJNIA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2C9D40)
#define PCAPHLBJNIA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2C9CD0)
#define PCAPHLBJNIA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2C99F0)
#define PCAPHLBJNIA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2C9940)

	class PCAPHLBJNIA : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::RPG::GameCore::LogicOperation HJNBDHMFKID; // 0x38
		::RPG::GameCore::RtModifierPropertyType FODBMMCKAEN; // 0x3C
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCAPHLBJNIA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PCAPHLBJNIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCAPHLBJNIA*))((::PBYTE)hIl2Cpp + PCAPHLBJNIA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PCAPHLBJNIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCAPHLBJNIA*))((::PBYTE)hIl2Cpp + PCAPHLBJNIA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PCAPHLBJNIA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PCAPHLBJNIA*))((::PBYTE)hIl2Cpp + PCAPHLBJNIA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PCAPHLBJNIA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PCAPHLBJNIA*))((::PBYTE)hIl2Cpp + PCAPHLBJNIA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
