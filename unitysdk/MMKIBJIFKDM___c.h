#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MMKIBJIFKDM___C_KELAFFNPFNN_OFFSET UNITYSDK_OFFSET(0x18B58EB0)
#define MMKIBJIFKDM___C_OCDOEAPGLKO_OFFSET UNITYSDK_OFFSET(0x18B58ED0)
#define MMKIBJIFKDM___C_OKPINPGAHOK_OFFSET UNITYSDK_OFFSET(0x18B58EE0)
#define MMKIBJIFKDM___C_PGNFLBFCOCB_OFFSET UNITYSDK_OFFSET(0x18B58EC0)
#define MMKIBJIFKDM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B58E60)
#define MMKIBJIFKDM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B58EA0)

inline static constexpr unsigned int MMKIBJIFKDM___c_TypeDefinitionIndex = 53936;

class MMKIBJIFKDM___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_7()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MMKIBJIFKDM___c_TypeDefinitionIndex)->GetStaticField(0x46AF0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MMKIBJIFKDM___c_TypeDefinitionIndex)->GetStaticField(0x46AF8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MMKIBJIFKDM___c_TypeDefinitionIndex)->GetStaticField(0x46B00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMKIBJIFKDM___c_TypeDefinitionIndex)->GetStaticField(0x46B08);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__13_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MMKIBJIFKDM___c_TypeDefinitionIndex)->GetStaticField(0x46B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMKIBJIFKDM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KELAFFNPFNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM___C_KELAFFNPFNN_OFFSET))(this);
	}

	::System::Boolean PGNFLBFCOCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM___C_PGNFLBFCOCB_OFFSET))(this);
	}

	::System::Boolean OCDOEAPGLKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM___C_OCDOEAPGLKO_OFFSET))(this);
	}

	::System::Boolean OKPINPGAHOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM___C_OKPINPGAHOK_OFFSET))(this);
	}
};
