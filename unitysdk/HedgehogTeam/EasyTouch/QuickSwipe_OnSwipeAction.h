#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONSWIPEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16747160)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickSwipe_OnSwipeAction_TypeDefinitionIndex = 40270;

	class QuickSwipe_OnSwipeAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONSWIPEACTION_CTOR_OFFSET))(this);
		}

	};
}
