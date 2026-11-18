#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1915A8D0)
#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1915A910)
#define MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__ONCLICKTAKEREWARD_B__14_0_OFFSET UNITYSDK_OFFSET(0x1915A920)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex = 53829;

	class UIActivityOBGiftPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C000);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityOBGiftPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTakeReward_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOBGIFTPOPWINDOWCONTROLLER___C__ONCLICKTAKEREWARD_B__14_0_OFFSET))(this);
		}
	};
}
