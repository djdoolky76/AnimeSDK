#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170A5C00)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170A5C40)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__GETSHOWREWARDLIST_B__86_0_OFFSET UNITYSDK_OFFSET(0x170A5C50)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_0_OFFSET UNITYSDK_OFFSET(0x170A5CF0)
#define MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_1_OFFSET UNITYSDK_OFFSET(0x170A5D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex = 66888;

	class UIVideoshopForgeWidgetChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KOIDMLPJGML*>** StaticGet___9__86_0()
		{
			return (::System::Comparison_1<::KOIDMLPJGML*>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35800);
		}
		static ::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>** StaticGet___9__116_0()
		{
			return (::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35808);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35810);
		}
		static ::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>** StaticGet___9__116_1()
		{
			return (::System::Action_1<::UnityEngine::UI::HorizontalLayoutGroup*>**)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopForgeWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShowRewardList_b__86_0(::KOIDMLPJGML* data1, ::KOIDMLPJGML* data2)
		{
			return ((::System::Int32(*)(::PVOID, ::KOIDMLPJGML*, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__GETSHOWREWARDLIST_B__86_0_OFFSET))(this, data1, data2);
		}

		::System::Void _RealUpdateCostDisplay_b__116_0(::UnityEngine::UI::HorizontalLayoutGroup* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_0_OFFSET))(this, x);
		}

		::System::Void _RealUpdateCostDisplay_b__116_1(::UnityEngine::UI::HorizontalLayoutGroup* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::HorizontalLayoutGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPFORGEWIDGETCHILDWINDOWCONTROLLER___C__REALUPDATECOSTDISPLAY_B__116_1_OFFSET))(this, x);
		}
	};
}
