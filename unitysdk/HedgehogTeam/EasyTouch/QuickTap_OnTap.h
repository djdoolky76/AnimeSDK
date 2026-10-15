#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_ONTAP_CTOR_OFFSET UNITYSDK_OFFSET(0x167569A0)

namespace HedgehogTeam::EasyTouch
{
	class QuickTap_OnTap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_ONTAP_CTOR_OFFSET))(this);
		}

	};
}
