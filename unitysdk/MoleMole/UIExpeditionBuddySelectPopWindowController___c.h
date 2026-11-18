#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
class CKENOHMEEGI_MFODNKHMNJC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1892F5F0)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1892F630)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__GETAUTOTSELECTTARGET_B__43_0_OFFSET UNITYSDK_OFFSET(0x1892F720)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONCLICKBUDDY_B__56_0_OFFSET UNITYSDK_OFFSET(0x1892F8D0)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__27_0_OFFSET UNITYSDK_OFFSET(0x1892F640)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex = 58363;

	class UIExpeditionBuddySelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x351A0);
		}
		static ::System::Func_2<::CKENOHMEEGI*, ::System::UInt32>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::CKENOHMEEGI*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x351A8);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x351B0);
		}
		static ::System::Comparison_1<::CKENOHMEEGI*>** StaticGet___9__43_0()
		{
			return (::System::Comparison_1<::CKENOHMEEGI*>**)Il2CppClass::FromTypeDefinitionIndex(UIExpeditionBuddySelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x351B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnUIDestroy_b__27_0(::CKENOHMEEGI* b)
		{
			return ((::System::UInt32(*)(::PVOID, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__27_0_OFFSET))(this, b);
		}

		::System::Int32 _GetAutotSelectTarget_b__43_0(::CKENOHMEEGI* a, ::CKENOHMEEGI* b)
		{
			return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI*, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__GETAUTOTSELECTTARGET_B__43_0_OFFSET))(this, a, b);
		}

		::System::Int32 _OnClickBuddy_b__56_0(::CKENOHMEEGI_MFODNKHMNJC* c)
		{
			return ((::System::Int32(*)(::PVOID, ::CKENOHMEEGI_MFODNKHMNJC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__ONCLICKBUDDY_B__56_0_OFFSET))(this, c);
		}
	};
}
