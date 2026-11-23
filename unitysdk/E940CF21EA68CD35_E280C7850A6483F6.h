#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B07850EA97DBB75A.h"

namespace System { class String; }
namespace System { class Type; }

#define E940CF21EA68CD35_E280C7850A6483F6_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3C19D20)
#define E940CF21EA68CD35_E280C7850A6483F6_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3C19CC0)
#define E940CF21EA68CD35_E280C7850A6483F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E940CF21EA68CD35_E280C7850A6483F6_TypeDefinitionIndex = 11470;

class E940CF21EA68CD35_E280C7850A6483F6 : public ::System::Object
{
public:
	::System::Boolean FC3208D7B8C7EE04(::B07850EA97DBB75A<::System::Type*, ::System::String*> B689A73377154515, ::B07850EA97DBB75A<::System::Type*, ::System::String*> F2B1B9B0CD5BC286)
	{
		return ((::System::Boolean(*)(::PVOID, ::B07850EA97DBB75A<::System::Type*, ::System::String*>, ::B07850EA97DBB75A<::System::Type*, ::System::String*>))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_E280C7850A6483F6_FC3208D7B8C7EE04_OFFSET))(this, B689A73377154515, F2B1B9B0CD5BC286);
	}

	::System::Int32 B996A70283B60FAC(::B07850EA97DBB75A<::System::Type*, ::System::String*> A5C299C395D3E1B2)
	{
		return ((::System::Int32(*)(::PVOID, ::B07850EA97DBB75A<::System::Type*, ::System::String*>))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_E280C7850A6483F6_B996A70283B60FAC_OFFSET))(this, A5C299C395D3E1B2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_E280C7850A6483F6__CTOR_OFFSET))(this);
	}
};
