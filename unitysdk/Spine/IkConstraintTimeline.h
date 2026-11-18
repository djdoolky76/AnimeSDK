#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA7160)
#define SPINE_IKCONSTRAINTTIMELINE_GET_CONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1FFA7010)
#define SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FFA7000)
#define SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FFA7020)
#define SPINE_IKCONSTRAINTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA6F70)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintTimeline_TypeDefinitionIndex = 32927;

	class IkConstraintTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x6; // 0x0
		// static const ::System::Int32 MIX = 0x1; // 0x0
		// static const ::System::Int32 SOFTNESS = 0x2; // 0x0
		// static const ::System::Int32 BEND_DIRECTION = 0x3; // 0x0
		// static const ::System::Int32 COMPRESS = 0x4; // 0x0
		// static const ::System::Int32 STRETCH = 0x5; // 0x0
		::System::Int32 constraintIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_ConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_CONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single mix, ::System::Single softness, ::System::Int32 bendDirection, ::System::Boolean compress, ::System::Boolean stretch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET))(this, frame, time, mix, softness, bendDirection, compress, stretch);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
