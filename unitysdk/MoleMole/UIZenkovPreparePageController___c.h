#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B3FED0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3FF10)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIINIT_B__47_0_OFFSET UNITYSDK_OFFSET(0x13B3FF20)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIOPEN_B__48_0_OFFSET UNITYSDK_OFFSET(0x13B3FFE0)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__STARTPREPAREPOPUPSEQUENCE_B__49_1_OFFSET UNITYSDK_OFFSET(0x13B40090)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPreparePageController___c_TypeDefinitionIndex = 76821;

	class UIZenkovPreparePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4FBF0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__47_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4FBF8);
		}
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__48_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4FC00);
		}
		static ::System::Action_1<::System::Action*>** StaticGet___9__49_1()
		{
			return (::System::Action_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPreparePageController___c_TypeDefinitionIndex)->GetStaticField(0x4FC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__47_0(::System::Object* payload)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIINIT_B__47_0_OFFSET))(this, payload);
		}

		::System::Void _OnUIOpen_b__48_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__ONUIOPEN_B__48_0_OFFSET))(this, _);
		}

		::System::Void _StartPreparePopupSequence_b__49_1(::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__STARTPREPAREPOPUPSEQUENCE_B__49_1_OFFSET))(this, onFinished);
		}
	};
}
