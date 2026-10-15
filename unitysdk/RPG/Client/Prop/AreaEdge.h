#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_AREAEDGE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC1D790)

namespace RPG::Client::Prop
{
	class AreaEdge : public ::System::Object
	{
	public:
		::System::Int32 PointA; // 0x10
		::System::Int32 PointB; // 0x14
		::System::Single ForwardWeight; // 0x18
		::System::Single BackwardWeight; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_AREAEDGE_CTOR_OFFSET))(this);
		}

	};
}
