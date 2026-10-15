#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
namespace RPG::Client { class CurveUndirectedEdge; }

#define RPG_CLIENT_CURVEEDGEPOINT_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBCF840)
#define RPG_CLIENT_CURVEEDGEPOINT_DPLEMDAOAAE_OFFSET UNITYSDK_OFFSET(0xE4570)
#define RPG_CLIENT_CURVEEDGEPOINT_GET_EMPTYPOINT_OFFSET UNITYSDK_OFFSET(0xCBCF3F0)
#define RPG_CLIENT_CURVEEDGEPOINT_GPDIHOGDLAI_OFFSET UNITYSDK_OFFSET(0xE4500)
#define RPG_CLIENT_CURVEEDGEPOINT_OAAEKEBBJBK_OFFSET UNITYSDK_OFFSET(0xE4450)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveEdgePoint_TypeDefinitionIndex = 68566;

	struct alignas(8) CurveEdgePoint
	{
		::RPG::Client::ECurveEdgePoint point; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::CurveUndirectedEdge* edge; // 0x18
		static ::RPG::Client::CurveEdgePoint* StaticGet__EmptyPoint_k__BackingField()
		{
			return (::RPG::Client::CurveEdgePoint*)UnitySDK::FromName("RPG.Client", "CurveEdgePoint")->GetStaticField(0x1AFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_CCTOR_OFFSET))();
		}

		/*
		static ::RPG::Client::CurveEdgePoint get_EmptyPoint()
		{
			return ((::RPG::Client::CurveEdgePoint(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_GET_EMPTYPOINT_OFFSET))();
		}
		*/

		::System::Boolean OAAEKEBBJBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_OAAEKEBBJBK_OFFSET))(this);
		}

		/*
		::RPG::Client::CurveEdgePoint GPDIHOGDLAI()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_GPDIHOGDLAI_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::CurveEdgePoint DPLEMDAOAAE()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEEDGEPOINT_DPLEMDAOAAE_OFFSET))(this);
		}
		*/

	};
}
