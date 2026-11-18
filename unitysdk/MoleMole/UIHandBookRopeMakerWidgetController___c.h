#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANPJANGHICC;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176915D0)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17691610)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x17691620)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET UNITYSDK_OFFSET(0x17691740)
#define MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__12_0_OFFSET UNITYSDK_OFFSET(0x17691860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex = 51997;

	class UIHandBookRopeMakerWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::ANPJANGHICC*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::ANPJANGHICC*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48A10);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48A18);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48A20);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRopeMakerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48A28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_0_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__ONCREATEVIEW_B__4_1_OFFSET))(this);
		}

		::System::Int32 _RefreshProxyQuest_b__12_0(::ANPJANGHICC* a, ::ANPJANGHICC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::ANPJANGHICC*, ::ANPJANGHICC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROPEMAKERWIDGETCONTROLLER___C__REFRESHPROXYQUEST_B__12_0_OFFSET))(this, a, b);
		}
	};
}
