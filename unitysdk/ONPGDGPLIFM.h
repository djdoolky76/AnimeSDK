#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELKANIHDJPJ;

#define ONPGDGPLIFM_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x15FF2FD0)
#define ONPGDGPLIFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FF31C0)
#define ONPGDGPLIFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF31B0)

inline static constexpr unsigned int ONPGDGPLIFM_TypeDefinitionIndex = 42821;

class ONPGDGPLIFM : public ::System::Object
{
public:
	static ::ONPGDGPLIFM** StaticGet_NJLLMPCDOEB()
	{
		return (::ONPGDGPLIFM**)Il2CppClass::FromTypeDefinitionIndex(ONPGDGPLIFM_TypeDefinitionIndex)->GetStaticField(0x3E9B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPGDGPLIFM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONPGDGPLIFM__CCTOR_OFFSET))();
	}

	::ELKANIHDJPJ* LJPJBPCIEAF(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ELKANIHDJPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONPGDGPLIFM_LJPJBPCIEAF_OFFSET))(this, OBNIAHNMHPF);
	}
};
