#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/PhysicsConstraintTimeline.h"

namespace Spine { class PhysicsConstraintData; }
namespace Spine { class PhysicsConstraintPose; }

#define SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x1F55FF80)
#define SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x1F55FFC0)
#define SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x1F55FFA0)
#define SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55FEE0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintGravityTimeline_TypeDefinitionIndex = 32939;

	class PhysicsConstraintGravityTimeline : public ::Spine::PhysicsConstraintTimeline
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Single Get(::Spine::PhysicsConstraintPose* pose)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::PhysicsConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE_GET_OFFSET))(this, pose);
		}

		::System::Void Set(::Spine::PhysicsConstraintPose* pose, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PhysicsConstraintPose*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE_SET_OFFSET))(this, pose, value);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* constraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::PhysicsConstraintData*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTGRAVITYTIMELINE_GLOBAL_OFFSET))(this, constraint);
		}
	};
}
