#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ONTOUCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E989820)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTouch_OnTouch_TypeDefinitionIndex = 41252;

	class QuickTouch_OnTouch
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTOUCH_ONTOUCH_CTOR_OFFSET))(this);
		}

	};
}
