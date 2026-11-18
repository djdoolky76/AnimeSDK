#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintTimeline1.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Property.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_PHYSICSCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE5C0F0)
#define SPINE_PHYSICSCONSTRAINTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5C060)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintTimeline_TypeDefinitionIndex = 32933;

	class PhysicsConstraintTimeline : public ::Spine::ConstraintTimeline1
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex, ::Spine::Property property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Spine::Property))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex, property);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
