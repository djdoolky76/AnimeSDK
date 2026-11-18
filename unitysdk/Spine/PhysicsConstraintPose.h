#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_PHYSICSCONSTRAINTPOSE_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1EBF0B70)
#define SPINE_PHYSICSCONSTRAINTPOSE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1EBF0BD0)
#define SPINE_PHYSICSCONSTRAINTPOSE_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1EBF0B30)
#define SPINE_PHYSICSCONSTRAINTPOSE_GET_MASSINVERSE_OFFSET UNITYSDK_OFFSET(0x1EBF0B90)
#define SPINE_PHYSICSCONSTRAINTPOSE_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1EBF0BF0)
#define SPINE_PHYSICSCONSTRAINTPOSE_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x1EBF0B50)
#define SPINE_PHYSICSCONSTRAINTPOSE_GET_WIND_OFFSET UNITYSDK_OFFSET(0x1EBF0BB0)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1EBF0B80)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1EBF0BE0)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1EBF0B40)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_MASSINVERSE_OFFSET UNITYSDK_OFFSET(0x1EBF0BA0)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1EBF0C00)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_OFFSET UNITYSDK_OFFSET(0x1EBF0B00)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x1EBF0B60)
#define SPINE_PHYSICSCONSTRAINTPOSE_SET_WIND_OFFSET UNITYSDK_OFFSET(0x1EBF0BC0)
#define SPINE_PHYSICSCONSTRAINTPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF0C10)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintPose_TypeDefinitionIndex = 33042;

	class PhysicsConstraintPose : public ::System::Object
	{
	public:
		::System::Single strength; // 0x10
		::System::Single gravity; // 0x14
		::System::Single wind; // 0x18
		::System::Single mix; // 0x1C
		::System::Single damping; // 0x20
		::System::Single inertia; // 0x24
		::System::Single massInverse; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::PhysicsConstraintPose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PhysicsConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_OFFSET))(this, pose);
		}

		::System::Single get_Inertia()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_INERTIA_OFFSET))(this);
		}

		::System::Void set_Inertia(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_INERTIA_OFFSET))(this, value);
		}

		::System::Single get_Strength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_STRENGTH_OFFSET))(this);
		}

		::System::Void set_Strength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_STRENGTH_OFFSET))(this, value);
		}

		::System::Single get_Damping()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_DAMPING_OFFSET))(this);
		}

		::System::Void set_Damping(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_DAMPING_OFFSET))(this, value);
		}

		::System::Single get_MassInverse()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_MASSINVERSE_OFFSET))(this);
		}

		::System::Void set_MassInverse(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_MASSINVERSE_OFFSET))(this, value);
		}

		::System::Single get_Wind()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_WIND_OFFSET))(this);
		}

		::System::Void set_Wind(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_WIND_OFFSET))(this, value);
		}

		::System::Single get_Gravity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_Gravity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_GRAVITY_OFFSET))(this, value);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTPOSE_SET_MIX_OFFSET))(this, value);
		}
	};
}
