#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONSWIPEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16756640)

namespace HedgehogTeam::EasyTouch
{
	class QuickSwipe_OnSwipeAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONSWIPEACTION_CTOR_OFFSET))(this);
		}

	};
}
