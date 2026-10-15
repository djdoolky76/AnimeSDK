#pragma once
#include "unitysdk/unitysdk.h"

#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAGSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x16753D00)

namespace HedgehogTeam::EasyTouch
{
	class QuickDrag_OnDragStart
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDRAGSTART_CTOR_OFFSET))(this);
		}

	};
}
