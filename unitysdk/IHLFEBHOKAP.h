#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class IHLFEBHOKAP;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define IHLFEBHOKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF12120)
#define IHLFEBHOKAP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CF122F0)
#define IHLFEBHOKAP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CF122C0)
#define IHLFEBHOKAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF12130)
#define IHLFEBHOKAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF120F0)

inline static constexpr unsigned int IHLFEBHOKAP_TypeDefinitionIndex = 24167;

	class IHLFEBHOKAP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DOIIKPLMJLK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLFEBHOKAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IHLFEBHOKAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IHLFEBHOKAP*))((::PBYTE)hIl2Cpp + IHLFEBHOKAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IHLFEBHOKAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IHLFEBHOKAP*))((::PBYTE)hIl2Cpp + IHLFEBHOKAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::IHLFEBHOKAP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IHLFEBHOKAP*))((::PBYTE)hIl2Cpp + IHLFEBHOKAP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::IHLFEBHOKAP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IHLFEBHOKAP*))((::PBYTE)hIl2Cpp + IHLFEBHOKAP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
