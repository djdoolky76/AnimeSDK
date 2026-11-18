#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define ODLJONOHHNK___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x15FD4D30)
#define ODLJONOHHNK___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x15FD4D10)
#define ODLJONOHHNK___C_OBPEBOBHDCO_OFFSET UNITYSDK_OFFSET(0x15FD4D20)
#define ODLJONOHHNK___C_PHENNELAFJM_OFFSET UNITYSDK_OFFSET(0x15FD4CD0)
#define ODLJONOHHNK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FD4C80)
#define ODLJONOHHNK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD4CC0)

inline static constexpr unsigned int ODLJONOHHNK___c_TypeDefinitionIndex = 59631;

class ODLJONOHHNK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ODLJONOHHNK___c_TypeDefinitionIndex)->GetStaticField(0x4EF00);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ODLJONOHHNK___c_TypeDefinitionIndex)->GetStaticField(0x4EF08);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ODLJONOHHNK___c_TypeDefinitionIndex)->GetStaticField(0x4EF10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ODLJONOHHNK___c_TypeDefinitionIndex)->GetStaticField(0x4EF18);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_11()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ODLJONOHHNK___c_TypeDefinitionIndex)->GetStaticField(0x4EF20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODLJONOHHNK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJONOHHNK___C__CTOR_OFFSET))(this);
	}

	::System::String* PHENNELAFJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJONOHHNK___C_PHENNELAFJM_OFFSET))(this);
	}

	::System::Boolean KJLBMJKKPJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJONOHHNK___C_KJLBMJKKPJI_OFFSET))(this);
	}

	::System::Boolean OBPEBOBHDCO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJONOHHNK___C_OBPEBOBHDCO_OFFSET))(this);
	}

	::System::Boolean KHDPGPNKGBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJONOHHNK___C_KHDPGPNKGBN_OFFSET))(this);
	}
};
