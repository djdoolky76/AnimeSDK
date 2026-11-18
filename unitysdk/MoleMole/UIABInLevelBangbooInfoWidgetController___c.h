#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B7BD50)
#define MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7BD90)
#define MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__REFRESHPROPERTY_B__22_0_OFFSET UNITYSDK_OFFSET(0x19B7BDA0)
#define MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__REFRESHPROPERTY_B__25_0_OFFSET UNITYSDK_OFFSET(0x19B7BE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelBangbooInfoWidgetController___c_TypeDefinitionIndex = 42795;

	class UIABInLevelBangbooInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelBangbooInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48860);
		}
		static ::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelBangbooInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48868);
		}
		static ::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelBangbooInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshProperty_b__22_0(::KNLFLMMHALL_1<::System::Object*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__REFRESHPROPERTY_B__22_0_OFFSET))(this, item);
		}

		::System::Void _RefreshProperty_b__25_0(::KNLFLMMHALL_1<::System::Object*>* item)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__REFRESHPROPERTY_B__25_0_OFFSET))(this, item);
		}
	};
}
