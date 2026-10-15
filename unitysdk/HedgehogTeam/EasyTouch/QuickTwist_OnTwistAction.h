#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONTWISTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x16757930)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTwist_OnTwistAction_TypeDefinitionIndex = 40281;

	class QuickTwist_OnTwistAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONTWISTACTION_CTOR_OFFSET))(this);
		}

	};
}
