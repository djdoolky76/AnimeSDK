#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_SpeedPoint; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF381B80)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF381BC0)
#define RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT___C___REBUILDSPEEDPOINTCACHE_B__194_0_OFFSET UNITYSDK_OFFSET(0xF381BD0)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int FollowRoadMovement___c_TypeDefinitionIndex = 49921;

	class FollowRoadMovement___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPGTools.RoadGenerator", "<>c")->GetStaticField(0x73D00);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__194_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPGTools.RoadGenerator", "<>c")->GetStaticField(0x73D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RebuildSpeedPointCache_b__194_0(::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint* a1, ::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint*, ::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint*))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_FOLLOWROADMOVEMENT___C___REBUILDSPEEDPOINTCACHE_B__194_0_OFFSET))(this, a1, a2);
		}

	};
}
