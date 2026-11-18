#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNCMEPFAEKF_ODILJOIDNFL.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class Object; }

#define FNCMEPFAEKF_NKJOMJHODIC_DHKCKLFGGDN_OFFSET UNITYSDK_OFFSET(0x700270)
#define FNCMEPFAEKF_NKJOMJHODIC__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9BF0)

inline static constexpr unsigned int FNCMEPFAEKF_NKJOMJHODIC_TypeDefinitionIndex = 50723;

struct alignas(4) FNCMEPFAEKF_NKJOMJHODIC
{
	::System::Single NKADHAGEBKM; // 0x10
	::System::Boolean DBFGCBHNCGI; // 0x14

	::System::Void _ctor(::System::Single BFMMEICFNCD, ::System::Boolean NIBJPEPGJCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_NKJOMJHODIC__CTOR_OFFSET))(this, BFMMEICFNCD, NIBJPEPGJCH);
	}

	::System::Int32 DHKCKLFGGDN(::FNCMEPFAEKF_ODILJOIDNFL LHHCBFCOFEI, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN)
	{
		return ((::System::Int32(*)(::PVOID, ::FNCMEPFAEKF_ODILJOIDNFL, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_NKJOMJHODIC_DHKCKLFGGDN_OFFSET))(this, LHHCBFCOFEI, IGAAKDOIPNN);
	}
};
