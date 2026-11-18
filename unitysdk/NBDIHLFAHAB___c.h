#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDEIDDOPHDD;
namespace System { template <typename T> class Comparison_1; }

#define NBDIHLFAHAB___C_NBDAMJMOGJO_OFFSET UNITYSDK_OFFSET(0x105A2290)
#define NBDIHLFAHAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105A2240)
#define NBDIHLFAHAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105A2280)

inline static constexpr unsigned int NBDIHLFAHAB___c_TypeDefinitionIndex = 92926;

class NBDIHLFAHAB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::GDEIDDOPHDD*>** StaticGet___9__29_0()
	{
		return (::System::Comparison_1<::GDEIDDOPHDD*>**)Il2CppClass::FromTypeDefinitionIndex(NBDIHLFAHAB___c_TypeDefinitionIndex)->GetStaticField(0x42440);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBDIHLFAHAB___c_TypeDefinitionIndex)->GetStaticField(0x42448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBDIHLFAHAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDIHLFAHAB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NBDAMJMOGJO(::GDEIDDOPHDD* HAAEBCOBKFF, ::GDEIDDOPHDD* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::GDEIDDOPHDD*, ::GDEIDDOPHDD*))((::PBYTE)hIl2Cpp + NBDIHLFAHAB___C_NBDAMJMOGJO_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
