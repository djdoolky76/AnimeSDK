#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class PMDAHIHMGFG;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define PMDAHIHMGFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3064D0)
#define PMDAHIHMGFG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3066D0)
#define PMDAHIHMGFG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3066A0)
#define PMDAHIHMGFG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3064E0)
#define PMDAHIHMGFG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3064A0)

inline static constexpr unsigned int PMDAHIHMGFG_TypeDefinitionIndex = 21284;

	class PMDAHIHMGFG : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* NCMKOFAAAOI; // 0x20
		::System::Boolean IIACEHCDKNN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDAHIHMGFG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PMDAHIHMGFG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMDAHIHMGFG*))((::PBYTE)hIl2Cpp + PMDAHIHMGFG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PMDAHIHMGFG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMDAHIHMGFG*))((::PBYTE)hIl2Cpp + PMDAHIHMGFG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PMDAHIHMGFG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PMDAHIHMGFG*))((::PBYTE)hIl2Cpp + PMDAHIHMGFG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PMDAHIHMGFG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PMDAHIHMGFG*))((::PBYTE)hIl2Cpp + PMDAHIHMGFG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
