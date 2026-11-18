#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_BONETIMELINE1_APPLY_OFFSET UNITYSDK_OFFSET(0x1F55E770)
#define SPINE_BONETIMELINE1_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x1F55E760)
#define SPINE_BONETIMELINE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55E6C0)

namespace Spine
{
	inline static constexpr unsigned int BoneTimeline1_TypeDefinitionIndex = 32901;

	class BoneTimeline1 : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 boneIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 boneIndex, ::System::UInt64 property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE1__CTOR_OFFSET))(this, frameCount, bezierCount, boneIndex, property);
		}

		::System::Int32 get_BoneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE1_GET_BONEINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_BONETIMELINE1_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
