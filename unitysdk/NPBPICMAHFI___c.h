#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NPBPICMAHFI___C_GPJIMMDNKHM_OFFSET UNITYSDK_OFFSET(0x13178B30)
#define NPBPICMAHFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13178AE0)
#define NPBPICMAHFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13178B20)

inline static constexpr unsigned int NPBPICMAHFI___c_TypeDefinitionIndex = 59398;

class NPBPICMAHFI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPBPICMAHFI___c_TypeDefinitionIndex)->GetStaticField(0x3C9B0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPBPICMAHFI___c_TypeDefinitionIndex)->GetStaticField(0x3C9B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPBPICMAHFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBPICMAHFI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GPJIMMDNKHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBPICMAHFI___C_GPJIMMDNKHM_OFFSET))(this);
	}
};
