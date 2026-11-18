#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFJOIHGDLHO;
class FGCOIBFFCHB;
class LBNBIMMAOPJ;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C48390)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C483D0)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHBG_B__10_0_OFFSET UNITYSDK_OFFSET(0x19C483E0)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHPROGRESS_B__11_0_OFFSET UNITYSDK_OFFSET(0x19C48400)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_0_OFFSET UNITYSDK_OFFSET(0x19C48420)
#define MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_1_OFFSET UNITYSDK_OFFSET(0x19C48450)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex = 38307;

	class UIHandBookZeroThemeItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::LBNBIMMAOPJ*, ::System::Boolean>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::LBNBIMMAOPJ*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D9A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D9A8);
		}
		static ::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D9B0);
		}
		static ::System::Action_1<::FGCOIBFFCHB*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::FGCOIBFFCHB*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D9B8);
		}
		static ::System::Func_2<::CFJOIHGDLHO*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::CFJOIHGDLHO*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroThemeItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4D9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBg_b__10_0(::FGCOIBFFCHB* bg)
		{
			return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHBG_B__10_0_OFFSET))(this, bg);
		}

		::System::Void _RefreshProgress_b__11_0(::KNLFLMMHALL_1<::System::Object*>* go)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__REFRESHPROGRESS_B__11_0_OFFSET))(this, go);
		}

		::System::Boolean _UpdateAbyssEvent_b__14_0(::CFJOIHGDLHO* cfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFJOIHGDLHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_0_OFFSET))(this, cfg);
		}

		::System::Boolean _UpdateAbyssEvent_b__14_1(::LBNBIMMAOPJ* cfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBNBIMMAOPJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROTHEMEITEMWIDGETCONTROLLER___C__UPDATEABYSSEVENT_B__14_1_OFFSET))(this, cfg);
		}
	};
}
