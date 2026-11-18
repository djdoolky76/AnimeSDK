#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Physics.h"

namespace Spine { class BonePose; }
namespace Spine { class IConstraint; }
namespace Spine { class PhysicsConstraintData; }
namespace Spine { class Skeleton; }

#define SPINE_PHYSICSCONSTRAINT_COPY_OFFSET UNITYSDK_OFFSET(0x1F8BA370)
#define SPINE_PHYSICSCONSTRAINT_GET_BONE_OFFSET UNITYSDK_OFFSET(0x1F8BB670)
#define SPINE_PHYSICSCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET UNITYSDK_OFFSET(0x1F8BB640)
#define SPINE_PHYSICSCONSTRAINT_RESET_OFFSET UNITYSDK_OFFSET(0x1F8BA410)
#define SPINE_PHYSICSCONSTRAINT_ROTATE_OFFSET UNITYSDK_OFFSET(0x1F8BA4B0)
#define SPINE_PHYSICSCONSTRAINT_SET_BONE_OFFSET UNITYSDK_OFFSET(0x1F8BB680)
#define SPINE_PHYSICSCONSTRAINT_SORT_OFFSET UNITYSDK_OFFSET(0x1F8BB5A0)
#define SPINE_PHYSICSCONSTRAINT_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1F8BA470)
#define SPINE_PHYSICSCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F8BA5A0)
#define SPINE_PHYSICSCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BA1E0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraint_TypeDefinitionIndex = 33040;

	class PhysicsConstraint
	{
	public:
		::Spine::BonePose* bone; // 0x38
		::System::Single uy; // 0x40
		::System::Single xVelocity; // 0x44
		::System::Single scaleOffset; // 0x48
		::System::Single rotateOffset; // 0x4C
		::System::Single scaleLag; // 0x50
		::System::Single rotateLag; // 0x54
		::System::Single ux; // 0x58
		::System::Single lastTime; // 0x5C
		::System::Single rotateVelocity; // 0x60
		::System::Single remaining; // 0x64
		::System::Single yLag; // 0x68
		::System::Single xOffset; // 0x6C
		::System::Single cy; // 0x70
		::System::Single xLag; // 0x74
		::System::Boolean reset; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single yVelocity; // 0x7C
		::System::Single scaleVelocity; // 0x80
		::System::Single ty; // 0x84
		::System::Single tx; // 0x88
		::System::Single yOffset; // 0x8C
		::System::Single cx; // 0x90

		::System::Void _ctor(::Spine::PhysicsConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PhysicsConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::Spine::IConstraint* Copy(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_COPY_OFFSET))(this, skeleton);
		}

		::System::Void Reset(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_RESET_OFFSET))(this, skeleton);
		}

		::System::Void Translate(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_TRANSLATE_OFFSET))(this, x, y);
		}

		::System::Void Rotate(::System::Single x, ::System::Single y, ::System::Single degrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_ROTATE_OFFSET))(this, x, y, degrees);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_UPDATE_OFFSET))(this, skeleton, physics);
		}

		::System::Void Sort(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SORT_OFFSET))(this, skeleton);
		}

		::System::Boolean get_IsSourceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET))(this);
		}

		::Spine::BonePose* get_Bone()
		{
			return ((::Spine::BonePose*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_GET_BONE_OFFSET))(this);
		}

		::System::Void set_Bone(::Spine::BonePose* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BonePose*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINT_SET_BONE_OFFSET))(this, value);
		}
	};
}
