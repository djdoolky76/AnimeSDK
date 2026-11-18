#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define PLBMGMLPPHK___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x1D9CFB70)
#define PLBMGMLPPHK___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x1D9CF770)
#define PLBMGMLPPHK___C_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x1D9CF900)
#define PLBMGMLPPHK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9CF720)
#define PLBMGMLPPHK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CF760)

inline static constexpr unsigned int PLBMGMLPPHK___c_TypeDefinitionIndex = 83290;

class PLBMGMLPPHK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PLBMGMLPPHK___c_TypeDefinitionIndex)->GetStaticField(0x3FC80);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__0_0()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(PLBMGMLPPHK___c_TypeDefinitionIndex)->GetStaticField(0x3FC88);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PLBMGMLPPHK___c_TypeDefinitionIndex)->GetStaticField(0x3FC90);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(PLBMGMLPPHK___c_TypeDefinitionIndex)->GetStaticField(0x3FC98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLBMGMLPPHK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBMGMLPPHK___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* KJLBMJKKPJI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBMGMLPPHK___C_KJLBMJKKPJI_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* MEABAAJFJDI()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBMGMLPPHK___C_MEABAAJFJDI_OFFSET))(this);
	}

	::System::String* KHDPGPNKGBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBMGMLPPHK___C_KHDPGPNKGBN_OFFSET))(this);
	}
};
