#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DEGPHGLOFAG___C_JDLGIIHDFKA_OFFSET UNITYSDK_OFFSET(0x132906F0)
#define DEGPHGLOFAG___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x132906D0)
#define DEGPHGLOFAG___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x13290700)
#define DEGPHGLOFAG___C_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x132906E0)
#define DEGPHGLOFAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13290680)
#define DEGPHGLOFAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132906C0)

inline static constexpr unsigned int DEGPHGLOFAG___c_TypeDefinitionIndex = 69968;

class DEGPHGLOFAG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DEGPHGLOFAG___c_TypeDefinitionIndex)->GetStaticField(0x49950);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DEGPHGLOFAG___c_TypeDefinitionIndex)->GetStaticField(0x49958);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_4()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DEGPHGLOFAG___c_TypeDefinitionIndex)->GetStaticField(0x49960);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEGPHGLOFAG___c_TypeDefinitionIndex)->GetStaticField(0x49968);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DEGPHGLOFAG___c_TypeDefinitionIndex)->GetStaticField(0x49970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGPHGLOFAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPHGLOFAG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KHDPGPNKGBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPHGLOFAG___C_KHDPGPNKGBN_OFFSET))(this);
	}

	::System::Boolean MEABAAJFJDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPHGLOFAG___C_MEABAAJFJDI_OFFSET))(this);
	}

	::System::Boolean JDLGIIHDFKA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPHGLOFAG___C_JDLGIIHDFKA_OFFSET))(this);
	}

	::System::Boolean KJLBMJKKPJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPHGLOFAG___C_KJLBMJKKPJI_OFFSET))(this);
	}
};
