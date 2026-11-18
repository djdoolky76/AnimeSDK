#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPEEBMCNPD;
class HGAJKHIMKJP;
class NKJLGFPNLBD;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198E8840)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198E8880)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBEGINBATTLE_B__13_0_OFFSET UNITYSDK_OFFSET(0x198E8EC0)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__5_0_OFFSET UNITYSDK_OFFSET(0x198E8890)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x198E88B0)
#define MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x198E89C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex = 68905;

	class UIAbyssS2EventInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BKPEEBMCNPD*, ::HGAJKHIMKJP*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::BKPEEBMCNPD*, ::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A28);
		}
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A30);
		}
		static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A38);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EventInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::HGAJKHIMKJP* _OnBuildBtnClick_b__5_0(::BKPEEBMCNPD* x)
		{
			return ((::HGAJKHIMKJP*(*)(::PVOID, ::BKPEEBMCNPD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBUILDBTNCLICK_B__5_0_OFFSET))(this, x);
		}

		::System::Void _OnHollowReconnectHandle_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_0_OFFSET))(this);
		}

		::System::Void _OnHollowReconnectHandle_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONHOLLOWRECONNECTHANDLE_B__10_1_OFFSET))(this);
		}

		::System::Void _OnBeginBattle_b__13_0(::NKJLGFPNLBD* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTINFOWIDGETCONTROLLER___C__ONBEGINBATTLE_B__13_0_OFFSET))(this, beginHollowData);
		}
	};
}
