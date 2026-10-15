#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAG_CTOR_OFFSET UNITYSDK_OFFSET(0x16753CE0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickDrag_OnDrag_TypeDefinitionIndex = 40256;

	class QuickDrag_OnDrag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAG_CTOR_OFFSET))(this);
		}

	};
}
