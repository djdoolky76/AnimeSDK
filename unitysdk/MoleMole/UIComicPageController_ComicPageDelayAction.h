#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION_RESET_OFFSET UNITYSDK_OFFSET(0x18D458B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION_TRIGGERED_OFFSET UNITYSDK_OFFSET(0x18D45980)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D45900)
#define MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18D459C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_ComicPageDelayAction_TypeDefinitionIndex = 84227;

	class UIComicPageController_ComicPageDelayAction : public ::System::Object
	{
	public:
		::System::Action* callBack; // 0x10
		::System::Boolean triggered; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single timer; // 0x1C
		::System::Single totalTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION_RESET_OFFSET))(this);
		}

		::System::Void Update(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION_UPDATE_OFFSET))(this, dt);
		}

		::System::Boolean Triggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_COMICPAGEDELAYACTION_TRIGGERED_OFFSET))(this);
		}
	};
}
