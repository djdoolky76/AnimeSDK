#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class ELLIFHOBAEJ;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define ELLIFHOBAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD76520)
#define ELLIFHOBAEJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD766A0)
#define ELLIFHOBAEJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD76670)
#define ELLIFHOBAEJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD76530)
#define ELLIFHOBAEJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD764F0)

inline static constexpr unsigned int ELLIFHOBAEJ_TypeDefinitionIndex = 24208;

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
