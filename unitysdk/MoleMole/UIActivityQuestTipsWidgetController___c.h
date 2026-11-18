#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A31A740)
#define MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31A780)
#define MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__UPDATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A31A790)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityQuestTipsWidgetController___c_TypeDefinitionIndex = 46584;

	class UIActivityQuestTipsWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityQuestTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EC50);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityQuestTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYQUESTTIPSWIDGETCONTROLLER___C__UPDATE_B__9_0_OFFSET))(this);
		}
	};
}
