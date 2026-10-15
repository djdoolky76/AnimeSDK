#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNFBANKKLJK.h"
class FCOEMCEDLNL;
class MDMKJEMOCJA;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define MDMKJEMOCJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D14BEF0)
#define MDMKJEMOCJA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D14BF00)
#define MDMKJEMOCJA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D14BE30)

	class MDMKJEMOCJA : public ::JNFBANKKLJK
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* IEHPFADHJFD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDMKJEMOCJA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDMKJEMOCJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDMKJEMOCJA*))((::PBYTE)hIl2Cpp + MDMKJEMOCJA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDMKJEMOCJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDMKJEMOCJA*))((::PBYTE)hIl2Cpp + MDMKJEMOCJA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
