#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHOVER_CTOR_OFFSET UNITYSDK_OFFSET(0x16754780)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_OnTouchOver_TypeDefinitionIndex = 40260;

	class QuickEnterOverExist_OnTouchOver
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHOVER_CTOR_OFFSET))(this);
		}

	};
}
