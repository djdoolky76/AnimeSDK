#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JNFBANKKLJK;

#define JNFBANKKLJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0500E0)
#define JNFBANKKLJK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D050080)
#define JNFBANKKLJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D04FE40)

inline static constexpr unsigned int JNFBANKKLJK_TypeDefinitionIndex = 21402;

	class JNFBANKKLJK : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNFBANKKLJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNFBANKKLJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNFBANKKLJK*))((::PBYTE)hIl2Cpp + JNFBANKKLJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNFBANKKLJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNFBANKKLJK*))((::PBYTE)hIl2Cpp + JNFBANKKLJK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
