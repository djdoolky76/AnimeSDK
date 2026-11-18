#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EE6E40)
#define MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE6E80)
#define MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__REFRESHNOTIFICATIONS_B__17_0_OFFSET UNITYSDK_OFFSET(0x18EE6E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABangbooInfoDialogPopWindowController___c_TypeDefinitionIndex = 77932;

	class UIRABangbooInfoDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRABangbooInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C520);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABangbooInfoDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4C528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshNotifications_b__17_0(::System::UInt32 item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABANGBOOINFODIALOGPOPWINDOWCONTROLLER___C__REFRESHNOTIFICATIONS_B__17_0_OFFSET))(this, item);
		}
	};
}
