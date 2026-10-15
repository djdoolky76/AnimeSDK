#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_CURVEEDGEPOINTTRIGGERSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0xCBD7A40)

namespace RPG::Client
{
	class CurveEdgePointTriggerSetting : public ::System::Object
	{
	public:
		::RPG::Client::ECurveEdgePoint edgePoint; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* edgeName; // 0x18
		::System::Boolean requireCompleted; // 0x20
		::System::Byte _padding1[0x7];
		::System::String* triggerCustomString; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINTTRIGGERSETTING_CTOR_OFFSET))(this);
		}

	};
}
