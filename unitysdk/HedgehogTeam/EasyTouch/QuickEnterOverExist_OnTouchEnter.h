#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x16745280)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_OnTouchEnter_TypeDefinitionIndex = 40259;

	class QuickEnterOverExist_OnTouchEnter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHENTER_CTOR_OFFSET))(this);
		}

	};
}
