#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
class FCOEMCEDLNL;
class NKGIHJEMCDA;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define NKGIHJEMCDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D22ED30)
#define NKGIHJEMCDA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D22EFA0)
#define NKGIHJEMCDA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D22EF70)
#define NKGIHJEMCDA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D22ED40)
#define NKGIHJEMCDA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D22ED00)

	class NKGIHJEMCDA : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DPICNGBHFAC; // 0x20
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28
		::RPG::GameCore::RtModifierPropertyType ACHILGIPGKL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGIHJEMCDA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKGIHJEMCDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKGIHJEMCDA*))((::PBYTE)hIl2Cpp + NKGIHJEMCDA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NKGIHJEMCDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKGIHJEMCDA*))((::PBYTE)hIl2Cpp + NKGIHJEMCDA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::NKGIHJEMCDA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NKGIHJEMCDA*))((::PBYTE)hIl2Cpp + NKGIHJEMCDA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::NKGIHJEMCDA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NKGIHJEMCDA*))((::PBYTE)hIl2Cpp + NKGIHJEMCDA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
