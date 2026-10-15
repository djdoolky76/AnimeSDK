#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CurveUndirectedEdge; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGECONNECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xCBDE250)

namespace RPG::Client
{
	class CurveUndirectedEdgeConnection : public ::System::Object
	{
	public:
		::System::Boolean isConnect; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::ECurveEdgePoint point; // 0x14
		::RPG::Client::CurveUndirectedEdge* edge; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGECONNECTION_CTOR_OFFSET))(this);
		}

	};
}
