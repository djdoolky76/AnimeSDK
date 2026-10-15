#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNFBANKKLJK.h"
class FCOEMCEDLNL;
class JBNAPFGIOGA;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define JBNAPFGIOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE71C0)
#define JBNAPFGIOGA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CFE71D0)
#define JBNAPFGIOGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFE7100)

inline static constexpr unsigned int JBNAPFGIOGA_TypeDefinitionIndex = 21404;

	class JBNAPFGIOGA : public ::JNFBANKKLJK
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* LMMDHGCIHBL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNAPFGIOGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JBNAPFGIOGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBNAPFGIOGA*))((::PBYTE)hIl2Cpp + JBNAPFGIOGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JBNAPFGIOGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JBNAPFGIOGA*))((::PBYTE)hIl2Cpp + JBNAPFGIOGA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
