#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EPJLDNFONEE;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define EPJLDNFONEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBF050)
#define EPJLDNFONEE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CDBF250)
#define EPJLDNFONEE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CDBF220)
#define EPJLDNFONEE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDBF060)
#define EPJLDNFONEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDBF020)

inline static constexpr unsigned int EPJLDNFONEE_TypeDefinitionIndex = 23096;

	class EPJLDNFONEE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AbilityPropertyChangeReason>* LJKFAPCKIHF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJLDNFONEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPJLDNFONEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPJLDNFONEE*))((::PBYTE)hIl2Cpp + EPJLDNFONEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EPJLDNFONEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPJLDNFONEE*))((::PBYTE)hIl2Cpp + EPJLDNFONEE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::EPJLDNFONEE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EPJLDNFONEE*))((::PBYTE)hIl2Cpp + EPJLDNFONEE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::EPJLDNFONEE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EPJLDNFONEE*))((::PBYTE)hIl2Cpp + EPJLDNFONEE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
