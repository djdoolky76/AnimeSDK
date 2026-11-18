#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C41170)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C411B0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_2_OFFSET UNITYSDK_OFFSET(0x19C411C0)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_3_OFFSET UNITYSDK_OFFSET(0x19C41200)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_4_OFFSET UNITYSDK_OFFSET(0x19C41230)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_0_OFFSET UNITYSDK_OFFSET(0x19C41420)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_1_OFFSET UNITYSDK_OFFSET(0x19C41440)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemWidgetController___c_TypeDefinitionIndex = 90051;

	class UIHandBookItemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4F9E0);
		}
		static ::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4F9E8);
		}
		static ::System::Func_2<::System::Int32, ::FOLOGHLENFB*>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::System::Int32, ::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4F9F0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4F9F8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FA00);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookItemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FA08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::FOLOGHLENFB* _OnScrollItemUpdate_b__9_2(::System::Int32 itemID)
		{
			return ((::FOLOGHLENFB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_2_OFFSET))(this, itemID);
		}

		::System::Boolean _OnScrollItemUpdate_b__9_3(::FOLOGHLENFB* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_3_OFFSET))(this, itemTemplate);
		}

		::System::Boolean _OnScrollItemUpdate_b__9_4(::FOLOGHLENFB* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__9_4_OFFSET))(this, itemTemplate);
		}

		::System::Int32 _RefreshGamepadList_b__10_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_0_OFFSET))(this, pair);
		}

		::UnityEngine::GameObject* _RefreshGamepadList_b__10_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> pair)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__REFRESHGAMEPADLIST_B__10_1_OFFSET))(this, pair);
		}
	};
}
