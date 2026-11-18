#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELKANIHDJPJ;

#define GLPHCIOEECP_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x13D6A120)
#define GLPHCIOEECP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D6A430)
#define GLPHCIOEECP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6A420)

inline static constexpr unsigned int GLPHCIOEECP_TypeDefinitionIndex = 66593;

class GLPHCIOEECP : public ::System::Object
{
public:
	static ::GLPHCIOEECP** StaticGet_NJLLMPCDOEB()
	{
		return (::GLPHCIOEECP**)Il2CppClass::FromTypeDefinitionIndex(GLPHCIOEECP_TypeDefinitionIndex)->GetStaticField(0x4BCF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPHCIOEECP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPHCIOEECP__CCTOR_OFFSET))();
	}

	::ELKANIHDJPJ* LJPJBPCIEAF(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ELKANIHDJPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLPHCIOEECP_LJPJBPCIEAF_OFFSET))(this, OBNIAHNMHPF);
	}
};
