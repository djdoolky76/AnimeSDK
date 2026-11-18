#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16736AE0)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CREATESPECIALGESTURECONTEXTDATA_B__73_0_OFFSET UNITYSDK_OFFSET(0x16736B40)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16736B20)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__103_0_OFFSET UNITYSDK_OFFSET(0x16736E10)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__47_0_OFFSET UNITYSDK_OFFSET(0x16736B30)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__88_0_OFFSET UNITYSDK_OFFSET(0x16736C00)
#define MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__88_1_OFFSET UNITYSDK_OFFSET(0x16736D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex = 80709;

	class UIMainCityCameraControlChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__47_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB28);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__88_1()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB30);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__88_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB38);
		}
		static ::System::Func_1<::System::Int32>** StaticGet___9__73_0()
		{
			return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB40);
		}
		static ::System::Action** StaticGet___9__103_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityCameraControlChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _HideBottomTips_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__HIDEBOTTOMTIPS_B__47_0_OFFSET))(this);
		}

		::System::Int32 _CreateSpecialGestureContextData_b__73_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__CREATESPECIALGESTURECONTEXTDATA_B__73_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__88_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__88_0_OFFSET))(this);
		}

		::System::String* _InitStickerShowModule_b__88_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__INITSTICKERSHOWMODULE_B__88_1_OFFSET))(this);
		}

		::System::Void _FullScreenBtnBottomCallback_b__103_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCHILDWINDOWCONTROLLER___C__FULLSCREENBTNBOTTOMCALLBACK_B__103_0_OFFSET))(this);
		}
	};
}
