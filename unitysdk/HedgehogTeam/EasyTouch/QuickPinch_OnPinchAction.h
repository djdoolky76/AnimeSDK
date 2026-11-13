#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONPINCHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1E988020)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickPinch_OnPinchAction_TypeDefinitionIndex = 41241;

	class QuickPinch_OnPinchAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONPINCHACTION_CTOR_OFFSET))(this);
		}

	};
}
