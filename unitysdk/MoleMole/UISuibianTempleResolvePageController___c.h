#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__BINDBUTTON_B__13_0_OFFSET UNITYSDK_OFFSET(0x19C994D0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C99480)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C994C0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__ONRECYLE_B__20_0_OFFSET UNITYSDK_OFFSET(0x19C99590)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__REFRESHSCROLLDATA_B__30_0_OFFSET UNITYSDK_OFFSET(0x19C995A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController___c_TypeDefinitionIndex = 58819;

	class UISuibianTempleResolvePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x45380);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x45388);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x45390);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleResolvePageController___c_TypeDefinitionIndex)->GetStaticField(0x45398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindButton_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__BINDBUTTON_B__13_0_OFFSET))(this);
		}

		::System::Void _OnRecyle_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__ONRECYLE_B__20_0_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollData_b__30_0(::System::Int32 itemID1, ::System::Int32 iteID2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER___C__REFRESHSCROLLDATA_B__30_0_OFFSET))(this, itemID1, iteID2);
		}
	};
}
