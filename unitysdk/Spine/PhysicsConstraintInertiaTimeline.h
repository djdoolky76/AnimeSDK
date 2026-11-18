#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/PhysicsConstraintTimeline.h"

namespace Spine { class PhysicsConstraintData; }
namespace Spine { class PhysicsConstraintPose; }

#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x20019500)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x20019540)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x20019520)
#define SPINE_PHYSICSCONSTRAINTINERTIATIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x20019470)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintInertiaTimeline_TypeDefinitionIndex = 32934;

	class PhysicsConstraintInertiaTimeline : public ::Spine::PhysicsConstraintTimeline
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Single Get(::Spine::PhysicsConstraintPose* pose)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::PhysicsConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GET_OFFSET))(this, pose);
		}

		::System::Void Set(::Spine::PhysicsConstraintPose* pose, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PhysicsConstraintPose*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_SET_OFFSET))(this, pose, value);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* constraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::PhysicsConstraintData*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTINERTIATIMELINE_GLOBAL_OFFSET))(this, constraint);
		}
	};
}
