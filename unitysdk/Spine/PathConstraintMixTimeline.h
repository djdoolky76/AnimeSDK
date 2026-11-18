#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTMIXTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FA19640)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_GET_CONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1FA19580)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FA19570)
#define SPINE_PATHCONSTRAINTMIXTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FA19590)
#define SPINE_PATHCONSTRAINTMIXTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA194E0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintMixTimeline_TypeDefinitionIndex = 32932;

	class PathConstraintMixTimeline : public ::Spine::CurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x4; // 0x0
		// static const ::System::Int32 ROTATE = 0x1; // 0x0
		// static const ::System::Int32 X = 0x2; // 0x0
		// static const ::System::Int32 Y = 0x3; // 0x0
		::System::Int32 constraintIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_ConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_GET_CONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single mixRotate, ::System::Single mixX, ::System::Single mixY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_SETFRAME_OFFSET))(this, frame, time, mixRotate, mixX, mixY);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTMIXTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
