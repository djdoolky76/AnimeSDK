#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBDPPHMPKPI;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C8B30)
#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167C8B70)
#define MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x167C8B80)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex = 66854;

	class UISocialCircleTagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::MBDPPHMPKPI*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Int32, ::MBDPPHMPKPI*>**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35690);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISocialCircleTagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MBDPPHMPKPI* _OnUIOpen_b__6_0(::System::Int32 value)
		{
			return ((::MBDPPHMPKPI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETAGDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, value);
		}
	};
}
