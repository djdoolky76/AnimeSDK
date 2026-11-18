#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJEECKFGAPL;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS118_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166B23D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS118_0__PLAYVOICEANDEMOSYNC_B__0_OFFSET UNITYSDK_OFFSET(0x166B23E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass118_0_TypeDefinitionIndex = 44772;

	class UIGalgamePageController___c__DisplayClass118_0 : public ::System::Object
	{
	public:
		::KJEECKFGAPL* playable; // 0x10
		::System::String* poseKey; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::System::String* facialKey; // 0x28
		::System::String* voiceKey; // 0x30
		::System::Int32 location; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS118_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoiceAndEmoSync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS118_0__PLAYVOICEANDEMOSYNC_B__0_OFFSET))(this);
		}
	};
}
