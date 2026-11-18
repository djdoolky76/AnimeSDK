#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DAMNKCKIMIB___C_JDLGIIHDFKA_OFFSET UNITYSDK_OFFSET(0x13E292C0)
#define DAMNKCKIMIB___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x13E292B0)
#define DAMNKCKIMIB___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x13E292A0)
#define DAMNKCKIMIB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E29250)
#define DAMNKCKIMIB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E29290)

inline static constexpr unsigned int DAMNKCKIMIB___c_TypeDefinitionIndex = 55524;

class DAMNKCKIMIB___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DAMNKCKIMIB___c_TypeDefinitionIndex)->GetStaticField(0x4E280);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DAMNKCKIMIB___c_TypeDefinitionIndex)->GetStaticField(0x4E288);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DAMNKCKIMIB___c_TypeDefinitionIndex)->GetStaticField(0x4E290);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DAMNKCKIMIB___c_TypeDefinitionIndex)->GetStaticField(0x4E298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMNKCKIMIB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNKCKIMIB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KJLBMJKKPJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNKCKIMIB___C_KJLBMJKKPJI_OFFSET))(this);
	}

	::System::Boolean KHDPGPNKGBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNKCKIMIB___C_KHDPGPNKGBN_OFFSET))(this);
	}

	::System::Boolean JDLGIIHDFKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNKCKIMIB___C_JDLGIIHDFKA_OFFSET))(this);
	}
};
