#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;
namespace System { template <typename T> class Comparison_1; }

#define OPPKNDHKKHN___C_IKPMCABBCKM_OFFSET UNITYSDK_OFFSET(0x1948D9D0)
#define OPPKNDHKKHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1948D980)
#define OPPKNDHKKHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1948D9C0)

inline static constexpr unsigned int OPPKNDHKKHN___c_TypeDefinitionIndex = 38929;

class OPPKNDHKKHN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OPPKNDHKKHN___c_TypeDefinitionIndex)->GetStaticField(0x39D60);
	}
	static ::System::Comparison_1<::BPDOBLDMEGB*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::BPDOBLDMEGB*>**)Il2CppClass::FromTypeDefinitionIndex(OPPKNDHKKHN___c_TypeDefinitionIndex)->GetStaticField(0x39D68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPPKNDHKKHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPKNDHKKHN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IKPMCABBCKM(::BPDOBLDMEGB* EJCBEJMGFAJ, ::BPDOBLDMEGB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BPDOBLDMEGB*, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + OPPKNDHKKHN___C_IKPMCABBCKM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
