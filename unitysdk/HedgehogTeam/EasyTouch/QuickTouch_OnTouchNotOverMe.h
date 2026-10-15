#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ONTOUCHNOTOVERME_CTOR_OFFSET UNITYSDK_OFFSET(0x16757060)

namespace HedgehogTeam::EasyTouch
{
	class QuickTouch_OnTouchNotOverMe
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ONTOUCHNOTOVERME_CTOR_OFFSET))(this);
		}

	};
}
