#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199B7310)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__PLAYVOICE_B__0_OFFSET UNITYSDK_OFFSET(0x199B7320)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass116_0_TypeDefinitionIndex = 44747;

	class UIGalgamePageController___c__DisplayClass116_0 : public ::System::Object
	{
	public:
		::System::Action* triggerWhenVoiceStart; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoice_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS116_0__PLAYVOICE_B__0_OFFSET))(this);
		}
	};
}
