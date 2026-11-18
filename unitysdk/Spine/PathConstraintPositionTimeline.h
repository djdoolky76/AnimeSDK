#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintTimeline1.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x20019250)
#define SPINE_PATHCONSTRAINTPOSITIONTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x200191B0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintPositionTimeline_TypeDefinitionIndex = 32930;

	class PathConstraintPositionTimeline : public ::Spine::ConstraintTimeline1
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTPOSITIONTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
