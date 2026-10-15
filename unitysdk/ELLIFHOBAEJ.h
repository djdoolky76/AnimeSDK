#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class ELLIFHOBAEJ;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define ELLIFHOBAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA4560)
#define ELLIFHOBAEJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CDA46E0)
#define ELLIFHOBAEJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CDA46B0)
#define ELLIFHOBAEJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDA4570)
#define ELLIFHOBAEJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDA4530)

	class ELLIFHOBAEJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLIFHOBAEJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELLIFHOBAEJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELLIFHOBAEJ*))((::PBYTE)hIl2Cpp + ELLIFHOBAEJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELLIFHOBAEJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELLIFHOBAEJ*))((::PBYTE)hIl2Cpp + ELLIFHOBAEJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::ELLIFHOBAEJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ELLIFHOBAEJ*))((::PBYTE)hIl2Cpp + ELLIFHOBAEJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::ELLIFHOBAEJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ELLIFHOBAEJ*))((::PBYTE)hIl2Cpp + ELLIFHOBAEJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
