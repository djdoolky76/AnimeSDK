#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREACOLLECTLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BC170)
#define MOLEMOLE_UIFORBIDDENAREACOLLECTLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173BC1B0)
#define MOLEMOLE_UIFORBIDDENAREACOLLECTLISTROWWIDGETCONTROLLER___C__REFRESHVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x173BC1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaCollectListRowWidgetController___c_TypeDefinitionIndex = 54843;

	class UIForbiddenAreaCollectListRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaCollectListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38D20);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIForbiddenAreaCollectListRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTLISTROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTLISTROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTLISTROWWIDGETCONTROLLER___C__REFRESHVIEW_B__7_1_OFFSET))(this);
		}
	};
}
