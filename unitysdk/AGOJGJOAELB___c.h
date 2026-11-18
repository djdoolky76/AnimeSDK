#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define AGOJGJOAELB___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x134CA4A0)
#define AGOJGJOAELB___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x134CA740)
#define AGOJGJOAELB___C_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x134C9CD0)
#define AGOJGJOAELB___C_NJOKIPGCHAG_OFFSET UNITYSDK_OFFSET(0x134C9F70)
#define AGOJGJOAELB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134C9C80)
#define AGOJGJOAELB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134C9CC0)

inline static constexpr unsigned int AGOJGJOAELB___c_TypeDefinitionIndex = 71184;

class AGOJGJOAELB___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AGOJGJOAELB___c_TypeDefinitionIndex)->GetStaticField(0x3A1B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGOJGJOAELB___c_TypeDefinitionIndex)->GetStaticField(0x3A1B8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AGOJGJOAELB___c_TypeDefinitionIndex)->GetStaticField(0x3A1C0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AGOJGJOAELB___c_TypeDefinitionIndex)->GetStaticField(0x3A1C8);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__0_3()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(AGOJGJOAELB___c_TypeDefinitionIndex)->GetStaticField(0x3A1D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGOJGJOAELB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOJGJOAELB___C__CTOR_OFFSET))(this);
	}

	::System::String* MEABAAJFJDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOJGJOAELB___C_MEABAAJFJDI_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* NJOKIPGCHAG()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOJGJOAELB___C_NJOKIPGCHAG_OFFSET))(this);
	}

	::System::String* KHDPGPNKGBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOJGJOAELB___C_KHDPGPNKGBN_OFFSET))(this);
	}

	::System::Boolean KJLBMJKKPJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOJGJOAELB___C_KJLBMJKKPJI_OFFSET))(this);
	}
};
