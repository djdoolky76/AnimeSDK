#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/PhysicsConstraintTimeline.h"

namespace Spine { class PhysicsConstraintData; }
namespace Spine { class PhysicsConstraintPose; }

#define SPINE_PHYSICSCONSTRAINTWINDTIMELINE_GET_OFFSET UNITYSDK_OFFSET(0x1F779310)
#define SPINE_PHYSICSCONSTRAINTWINDTIMELINE_GLOBAL_OFFSET UNITYSDK_OFFSET(0x1F779350)
#define SPINE_PHYSICSCONSTRAINTWINDTIMELINE_SET_OFFSET UNITYSDK_OFFSET(0x1F779330)
#define SPINE_PHYSICSCONSTRAINTWINDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F779270)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintWindTimeline_TypeDefinitionIndex = 32938;

	class PhysicsConstraintWindTimeline : public ::Spine::PhysicsConstraintTimeline
	{
	public:
		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTWINDTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex);
		}

		::System::Single Get(::Spine::PhysicsConstraintPose* pose)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::PhysicsConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTWINDTIMELINE_GET_OFFSET))(this, pose);
		}

		::System::Void Set(::Spine::PhysicsConstraintPose* pose, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PhysicsConstraintPose*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTWINDTIMELINE_SET_OFFSET))(this, pose, value);
		}

		::System::Boolean Global(::Spine::PhysicsConstraintData* constraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::PhysicsConstraintData*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTWINDTIMELINE_GLOBAL_OFFSET))(this, constraint);
		}
	};
}
