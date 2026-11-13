#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::RoadGenerator { class TrackSamplePointDetector_SpeedPoint; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IIMEBHGNNKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x193F0C10)
#define IIMEBHGNNKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x193F0C40)
#define IIMEBHGNNKP___C___REBUILDSPEEDPOINTCACHE_B__108_0_OFFSET UNITYSDK_OFFSET(0x193F0C50)

inline static constexpr unsigned int IIMEBHGNNKP___c_TypeDefinitionIndex = 81544;

	class IIMEBHGNNKP___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__108_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x678B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x678B8);
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
