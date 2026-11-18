#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELKANIHDJPJ;

#define GFINPIGCFDJ_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x11DA2DC0)
#define GFINPIGCFDJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DA2F00)
#define GFINPIGCFDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA2EF0)

inline static constexpr unsigned int GFINPIGCFDJ_TypeDefinitionIndex = 70832;

class GFINPIGCFDJ : public ::System::Object
{
public:
	static ::GFINPIGCFDJ** StaticGet_NJLLMPCDOEB()
	{
		return (::GFINPIGCFDJ**)Il2CppClass::FromTypeDefinitionIndex(GFINPIGCFDJ_TypeDefinitionIndex)->GetStaticField(0x50730);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFINPIGCFDJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFINPIGCFDJ__CCTOR_OFFSET))();
	}

	::ELKANIHDJPJ* LJPJBPCIEAF(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ELKANIHDJPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFINPIGCFDJ_LJPJBPCIEAF_OFFSET))(this, OBNIAHNMHPF);
	}
};
