#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseHideDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDEROLLINGSUBTITLESDIALOGBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE9015E0)

namespace RPGTools::Timeline
{
	class HideRollingSubtitlesDialogBehaviour : public ::RPGTools::Timeline::BaseHideDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEROLLINGSUBTITLESDIALOGBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
