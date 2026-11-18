#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B95470)
#define MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B954B0)
#define MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__ONGETREWARD_B__13_1_OFFSET UNITYSDK_OFFSET(0x19B954C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnGiftPopWindowController___c_TypeDefinitionIndex = 45765;

	class UIActivityReturnGiftPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC60);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityReturnGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetReward_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNGIFTPOPWINDOWCONTROLLER___C__ONGETREWARD_B__13_1_OFFSET))(this);
		}
	};
}
