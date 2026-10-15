#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHEXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x16745290)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_OnTouchExit_TypeDefinitionIndex = 40261;

	class QuickEnterOverExist_OnTouchExit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONTOUCHEXIT_CTOR_OFFSET))(this);
		}

	};
}
