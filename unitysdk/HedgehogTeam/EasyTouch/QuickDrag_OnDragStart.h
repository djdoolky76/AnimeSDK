#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAGSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x17597EF0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickDrag_OnDragStart_TypeDefinitionIndex = 41230;

	class QuickDrag_OnDragStart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAGSTART_CTOR_OFFSET))(this);
		}

	};
}
