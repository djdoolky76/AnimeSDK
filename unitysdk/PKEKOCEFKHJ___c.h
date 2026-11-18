#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI;
namespace System { template <typename T> class Comparison_1; }

#define PKEKOCEFKHJ___C_CLGCHLCAKCB_OFFSET UNITYSDK_OFFSET(0x1371C140)
#define PKEKOCEFKHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1371C0F0)
#define PKEKOCEFKHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1371C130)

inline static constexpr unsigned int PKEKOCEFKHJ___c_TypeDefinitionIndex = 79396;

class PKEKOCEFKHJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKEKOCEFKHJ___c_TypeDefinitionIndex)->GetStaticField(0x4C9A0);
	}
	static ::System::Comparison_1<::IANDOOLAALI*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::IANDOOLAALI*>**)Il2CppClass::FromTypeDefinitionIndex(PKEKOCEFKHJ___c_TypeDefinitionIndex)->GetStaticField(0x4C9A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKEKOCEFKHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEKOCEFKHJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CLGCHLCAKCB(::IANDOOLAALI* EJCBEJMGFAJ, ::IANDOOLAALI* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::IANDOOLAALI*, ::IANDOOLAALI*))((::PBYTE)hIl2Cpp + PKEKOCEFKHJ___C_CLGCHLCAKCB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
