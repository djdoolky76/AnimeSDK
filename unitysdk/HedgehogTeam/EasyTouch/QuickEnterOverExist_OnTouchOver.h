#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHOVER_CTOR_OFFSET UNITYSDK_OFFSET(0x17598970)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_OnTouchOver_TypeDefinitionIndex = 41235;

	class QuickEnterOverExist_OnTouchOver
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHOVER_CTOR_OFFSET))(this);
		}

	};
}
