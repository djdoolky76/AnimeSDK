#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17561980)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS33_0__ENSUREONGOINGFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x17561990)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass33_0_TypeDefinitionIndex = 53023;

	class UIChatPlusPageController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsureOnGoingFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS33_0__ENSUREONGOINGFADEIN_B__0_OFFSET))(this);
		}
	};
}
