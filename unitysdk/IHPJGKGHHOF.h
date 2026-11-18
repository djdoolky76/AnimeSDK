#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELKANIHDJPJ;

#define IHPJGKGHHOF_LJPJBPCIEAF_OFFSET UNITYSDK_OFFSET(0x1E4D83B0)
#define IHPJGKGHHOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D84F0)
#define IHPJGKGHHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D84E0)

inline static constexpr unsigned int IHPJGKGHHOF_TypeDefinitionIndex = 94039;

class IHPJGKGHHOF : public ::System::Object
{
public:
	static ::IHPJGKGHHOF** StaticGet_NJLLMPCDOEB()
	{
		return (::IHPJGKGHHOF**)Il2CppClass::FromTypeDefinitionIndex(IHPJGKGHHOF_TypeDefinitionIndex)->GetStaticField(0x52620);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPJGKGHHOF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHPJGKGHHOF__CCTOR_OFFSET))();
	}

	::ELKANIHDJPJ* LJPJBPCIEAF(::System::Int32 OBNIAHNMHPF)
	{
		return ((::ELKANIHDJPJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHPJGKGHHOF_LJPJBPCIEAF_OFFSET))(this, OBNIAHNMHPF);
	}
};
