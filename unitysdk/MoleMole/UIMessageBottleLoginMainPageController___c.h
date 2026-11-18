#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D5BD0)
#define MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186D5C10)
#define MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__TRIGGERQUESTPROGRESSKICK_B__13_0_OFFSET UNITYSDK_OFFSET(0x186D5C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMessageBottleLoginMainPageController___c_TypeDefinitionIndex = 75020;

	class UIMessageBottleLoginMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMessageBottleLoginMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x48C10);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMessageBottleLoginMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x48C18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerQuestProgressKick_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEBOTTLELOGINMAINPAGECONTROLLER___C__TRIGGERQUESTPROGRESSKICK_B__13_0_OFFSET))(this);
		}
	};
}
