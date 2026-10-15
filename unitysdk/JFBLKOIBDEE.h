#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class JFBLKOIBDEE;
namespace SimpleJSON { class JSONNode; }

#define JFBLKOIBDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D021CC0)
#define JFBLKOIBDEE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D021EC0)
#define JFBLKOIBDEE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D021E90)
#define JFBLKOIBDEE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D021CD0)
#define JFBLKOIBDEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D021C90)

inline static constexpr unsigned int JFBLKOIBDEE_TypeDefinitionIndex = 21565;

	class JFBLKOIBDEE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 DPICNGBHFAC; // 0x20
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBLKOIBDEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFBLKOIBDEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFBLKOIBDEE*))((::PBYTE)hIl2Cpp + JFBLKOIBDEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JFBLKOIBDEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFBLKOIBDEE*))((::PBYTE)hIl2Cpp + JFBLKOIBDEE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::JFBLKOIBDEE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JFBLKOIBDEE*))((::PBYTE)hIl2Cpp + JFBLKOIBDEE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::JFBLKOIBDEE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JFBLKOIBDEE*))((::PBYTE)hIl2Cpp + JFBLKOIBDEE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
