#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONPINCHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16755880)

namespace HedgehogTeam::EasyTouch
{
	class QuickPinch_OnPinchAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONPINCHACTION_CTOR_OFFSET))(this);
		}

	};
}
