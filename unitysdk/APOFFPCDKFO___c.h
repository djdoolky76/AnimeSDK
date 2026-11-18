#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define APOFFPCDKFO___C_HKPFBLAEFOA_OFFSET UNITYSDK_OFFSET(0xF7834E0)
#define APOFFPCDKFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF783490)
#define APOFFPCDKFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7834D0)

inline static constexpr unsigned int APOFFPCDKFO___c_TypeDefinitionIndex = 69117;

class APOFFPCDKFO___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Single>** StaticGet___9__25_0()
	{
		return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(APOFFPCDKFO___c_TypeDefinitionIndex)->GetStaticField(0x36D10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(APOFFPCDKFO___c_TypeDefinitionIndex)->GetStaticField(0x36D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APOFFPCDKFO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOFFPCDKFO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HKPFBLAEFOA(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + APOFFPCDKFO___C_HKPFBLAEFOA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
