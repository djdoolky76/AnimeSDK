#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOAHNKGLKKG;
namespace MoleMole { class UIHadalLineUp_LayerClipWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187BEBC0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187BEC00)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__ONUIOPEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x187BEC10)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___ONLAYERCLIPCLICK_B__16_0_OFFSET UNITYSDK_OFFSET(0x187BEC60)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_1_OFFSET UNITYSDK_OFFSET(0x187BEC80)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_2_OFFSET UNITYSDK_OFFSET(0x187BEC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineUpPageController___c_TypeDefinitionIndex = 68383;

	class UIHadalZone_LineUpPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__22_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EEC0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EEC8);
		}
		static ::System::Action_1<::MoleMole::UIHadalLineUp_LayerClipWidgetController*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::MoleMole::UIHadalLineUp_LayerClipWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EED0);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EED8);
		}
		static ::System::Comparison_1<::NOAHNKGLKKG*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::NOAHNKGLKKG*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x3EEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__8_0(::NOAHNKGLKKG* l, ::NOAHNKGLKKG* r)
		{
			return ((::System::Int32(*)(::PVOID, ::NOAHNKGLKKG*, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__ONUIOPEN_B__8_0_OFFSET))(this, l, r);
		}

		::System::Void __OnLayerClipClick_b__16_0(::MoleMole::UIHadalLineUp_LayerClipWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalLineUp_LayerClipWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___ONLAYERCLIPCLICK_B__16_0_OFFSET))(this, t);
		}

		::System::Void __RefreshLayer_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_1_OFFSET))(this);
		}

		::System::Void __RefreshLayer_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_2_OFFSET))(this);
		}
	};
}
