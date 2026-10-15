#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class JEBDGFNFEND;
namespace SimpleJSON { class JSONNode; }

#define JEBDGFNFEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D019DB0)
#define JEBDGFNFEND_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D019F80)
#define JEBDGFNFEND_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D019F50)
#define JEBDGFNFEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D019DC0)
#define JEBDGFNFEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D019D80)

inline static constexpr unsigned int JEBDGFNFEND_TypeDefinitionIndex = 24177;

	class JEBDGFNFEND : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* EEJGCFBJKAK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBDGFNFEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + JEBDGFNFEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + JEBDGFNFEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + JEBDGFNFEND_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + JEBDGFNFEND_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
