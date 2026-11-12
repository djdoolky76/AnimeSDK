#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_SpeedPoint; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IIMEBHGNNKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17416920)
#define IIMEBHGNNKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17416950)
#define IIMEBHGNNKP___C___REBUILDSPEEDPOINTCACHE_B__108_0_OFFSET UNITYSDK_OFFSET(0x17416960)

inline static constexpr unsigned int IIMEBHGNNKP___c_TypeDefinitionIndex = 81545;

	class IIMEBHGNNKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68300);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__108_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMEBHGNNKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RebuildSpeedPointCache_b__108_0(::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint* a1, ::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint*, ::RPGTools::RoadGenerator::TrackSamplePointDetector_SpeedPoint*))((::PBYTE)hIl2Cpp + IIMEBHGNNKP___C___REBUILDSPEEDPOINTCACHE_B__108_0_OFFSET))(this, a1, a2);
		}

	};
