#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECEPHBDBGDG;
class EIGJEBNOGLC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3FAE30)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FAE70)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A3FB170)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x1A3FAE80)
#define MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A3FAFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBossWidgetController___c_TypeDefinitionIndex = 74500;

	class UIHandBookBossWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::ECEPHBDBGDG*, ::EIGJEBNOGLC*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::ECEPHBDBGDG*, ::EIGJEBNOGLC*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DC0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DC8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DD0);
		}
		static ::System::Func_2<::EIGJEBNOGLC*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::EIGJEBNOGLC*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBossWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET))(this);
		}

		::EIGJEBNOGLC* _OnUIOpen_b__4_0(::ECEPHBDBGDG* template_)
		{
			return ((::EIGJEBNOGLC*(*)(::PVOID, ::ECEPHBDBGDG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, template_);
		}

		::System::Int32 _OnShow_b__5_0(::EIGJEBNOGLC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EIGJEBNOGLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBOSSWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}
	};
}
