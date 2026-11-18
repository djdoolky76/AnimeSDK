#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FNCMEPFAEKF_ODILJOIDNFL.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System { class Object; }

#define FNCMEPFAEKF_LAINPOEMNLO_DHKCKLFGGDN_OFFSET UNITYSDK_OFFSET(0x7B0480)
#define FNCMEPFAEKF_LAINPOEMNLO__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9BF0)

inline static constexpr unsigned int FNCMEPFAEKF_LAINPOEMNLO_TypeDefinitionIndex = 50724;

struct alignas(4) FNCMEPFAEKF_LAINPOEMNLO
{
	::System::Single FCEJJJPPLJN; // 0x10
	::System::Boolean IDICKKLJNFI; // 0x14

	::System::Void _ctor(::System::Single HAAEBCOBKFF, ::System::Boolean KILPCOMOCMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_LAINPOEMNLO__CTOR_OFFSET))(this, HAAEBCOBKFF, KILPCOMOCMD);
	}

	::System::Int32 DHKCKLFGGDN(::FNCMEPFAEKF_ODILJOIDNFL LHHCBFCOFEI, ::System::Span_1_9011FAD97750D224<::System::Object*> IGAAKDOIPNN)
	{
		return ((::System::Int32(*)(::PVOID, ::FNCMEPFAEKF_ODILJOIDNFL, ::System::Span_1_9011FAD97750D224<::System::Object*>))((::PBYTE)hIl2Cpp + FNCMEPFAEKF_LAINPOEMNLO_DHKCKLFGGDN_OFFSET))(this, LHHCBFCOFEI, IGAAKDOIPNN);
	}
};
