#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMAPDEEEBC.h"
#include "unitysdk/OMEHCMEGIHO_FailureReason.h"
class MDHABEDMBPM;
class MJCABDDEGOE_ECLGEDENJDJ;

#define HHFNJAAOBJK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCAE00)
#define HHFNJAAOBJK_FEDODODLKHI_OFFSET UNITYSDK_OFFSET(0x15CCACA0)
#define HHFNJAAOBJK_HPENJACAEGC_OFFSET UNITYSDK_OFFSET(0x15CCAD10)

inline static constexpr unsigned int HHFNJAAOBJK_TypeDefinitionIndex = 62384;

	class HHFNJAAOBJK : public ::OBMAPDEEEBC
	{
	public:
		::System::Single POCKAPEACFB; // 0x10
		// static const ::System::Object IAENLAFEOJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFNJAAOBJK_CTOR_OFFSET))(this);
		}

		::System::Void FEDODODLKHI(::MDHABEDMBPM* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDHABEDMBPM*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + HHFNJAAOBJK_FEDODODLKHI_OFFSET))(this, a1, a2);
		}

		::System::Void HPENJACAEGC(::OMEHCMEGIHO_FailureReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMEHCMEGIHO_FailureReason))((::PBYTE)hIl2Cpp + HHFNJAAOBJK_HPENJACAEGC_OFFSET))(this, a1);
		}

	};
