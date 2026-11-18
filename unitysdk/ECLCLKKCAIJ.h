#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IOHPJCFDAOH.h"

#define ECLCLKKCAIJ_COMPARE_OFFSET UNITYSDK_OFFSET(0x148C7E90)
#define ECLCLKKCAIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x148C7FB0)
#define ECLCLKKCAIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x148C7FA0)

inline static constexpr unsigned int ECLCLKKCAIJ_TypeDefinitionIndex = 80699;

class ECLCLKKCAIJ : public ::System::Object
{
public:
	static ::ECLCLKKCAIJ** StaticGet_DDGNFJDLOKA()
	{
		return (::ECLCLKKCAIJ**)Il2CppClass::FromTypeDefinitionIndex(ECLCLKKCAIJ_TypeDefinitionIndex)->GetStaticField(0x3AAD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLCLKKCAIJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLCLKKCAIJ__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::IOHPJCFDAOH HAAEBCOBKFF, ::IOHPJCFDAOH BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::IOHPJCFDAOH, ::IOHPJCFDAOH))((::PBYTE)hIl2Cpp + ECLCLKKCAIJ_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
