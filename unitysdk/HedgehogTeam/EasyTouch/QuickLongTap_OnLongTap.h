#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ONLONGTAP_CTOR_OFFSET UNITYSDK_OFFSET(0x16754DD0)

namespace HedgehogTeam::EasyTouch
{
	class QuickLongTap_OnLongTap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ONLONGTAP_CTOR_OFFSET))(this);
		}

	};
}
