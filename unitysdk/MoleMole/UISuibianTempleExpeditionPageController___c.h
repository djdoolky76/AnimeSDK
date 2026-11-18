#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156285C0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15628600)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__ONUIINIT_B__18_4_OFFSET UNITYSDK_OFFSET(0x15628610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex = 92891;

	class UISuibianTempleExpeditionPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__18_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex)->GetStaticField(0x39190);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController___c_TypeDefinitionIndex)->GetStaticField(0x39198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__ONUIINIT_B__18_4_OFFSET))(this);
		}
	};
}
