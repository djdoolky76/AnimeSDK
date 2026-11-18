#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_BONETIMELINE2_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF91400)
#define SPINE_BONETIMELINE2_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x1FF913F0)
#define SPINE_BONETIMELINE2_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FF91350)
#define SPINE_BONETIMELINE2_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FF91360)
#define SPINE_BONETIMELINE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF91290)

namespace Spine
{
	inline static constexpr unsigned int BoneTimeline2_TypeDefinitionIndex = 32902;

	class BoneTimeline2 : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x3; // 0x0
		// static const ::System::Int32 VALUE1 = 0x1; // 0x0
		// static const ::System::Int32 VALUE2 = 0x2; // 0x0
		::System::Int32 boneIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 boneIndex, ::System::UInt64 property1, ::System::UInt64 property2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE2__CTOR_OFFSET))(this, frameCount, bezierCount, boneIndex, property1, property2);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE2_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single value1, ::System::Single value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE2_SETFRAME_OFFSET))(this, frame, time, value1, value2);
		}

		::System::Int32 get_BoneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE2_GET_BONEINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE2_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
