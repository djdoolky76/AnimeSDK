#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ONLONGTAP_CTOR_OFFSET UNITYSDK_OFFSET(0x16754DD0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickLongTap_OnLongTap_TypeDefinitionIndex = 40263;

	class QuickLongTap_OnLongTap
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKLONGTAP_ONLONGTAP_CTOR_OFFSET))(this);
		}

	};
}
