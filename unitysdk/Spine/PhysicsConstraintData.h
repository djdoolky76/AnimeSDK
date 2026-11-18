#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ScaleYMode.h"

namespace Spine { class BoneData; }
namespace Spine { class IConstraint; }
namespace Spine { class Skeleton; }
namespace System { class String; }

#define SPINE_PHYSICSCONSTRAINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1FF91CA0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_BONE_OFFSET UNITYSDK_OFFSET(0x1FF91D00)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_DAMPINGGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E50)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_GRAVITYGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91EB0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_INERTIAGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E10)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x1FF91DD0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_MASSGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E70)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_MIXGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91ED0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_ROTATE_OFFSET UNITYSDK_OFFSET(0x1FF91D70)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1FF91D90)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_SCALEYMODE_OFFSET UNITYSDK_OFFSET(0x1FF91DF0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1FF91DB0)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1FF91D10)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_STRENGTHGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E30)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_WINDGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E90)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1FF91D30)
#define SPINE_PHYSICSCONSTRAINTDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1FF91D50)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_DAMPINGGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E60)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_GRAVITYGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91EC0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_INERTIAGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E20)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x1FF91DE0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_MASSGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E80)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_MIXGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91EE0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_ROTATE_OFFSET UNITYSDK_OFFSET(0x1FF91D80)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1FF91DA0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_SCALEYMODE_OFFSET UNITYSDK_OFFSET(0x1FF91E00)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1FF91DC0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1FF91D20)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_STRENGTHGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91E40)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_WINDGLOBAL_OFFSET UNITYSDK_OFFSET(0x1FF91EA0)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1FF91D40)
#define SPINE_PHYSICSCONSTRAINTDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1FF91D60)
#define SPINE_PHYSICSCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF91BF0)

namespace Spine
{
	inline static constexpr unsigned int PhysicsConstraintData_TypeDefinitionIndex = 33041;

	class PhysicsConstraintData
	{
	public:
		::Spine::BoneData* bone; // 0x28
		::System::Single rotate; // 0x30
		::System::Single step; // 0x34
		::System::Boolean inertiaGlobal; // 0x38
		::System::Boolean strengthGlobal; // 0x39
		::System::Boolean gravityGlobal; // 0x3A
		::System::Byte _padding0[0x1];
		::System::Single scaleX; // 0x3C
		::Spine::ScaleYMode scaleYMode; // 0x40
		::System::Boolean mixGlobal; // 0x44
		::System::Boolean massGlobal; // 0x45
		::System::Boolean dampingGlobal; // 0x46
		::System::Boolean windGlobal; // 0x47
		::System::Single y; // 0x48
		::System::Single shearX; // 0x4C
		::System::Single x; // 0x50
		::System::Single limit; // 0x54

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::IConstraint* Create(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_CREATE_OFFSET))(this, skeleton);
		}

		::Spine::BoneData* get_Bone()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_BONE_OFFSET))(this);
		}

		::System::Single get_Step()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_STEP_OFFSET))(this);
		}

		::System::Void set_Step(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_STEP_OFFSET))(this, value);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Rotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_ROTATE_OFFSET))(this);
		}

		::System::Void set_Rotate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_ROTATE_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_SHEARX_OFFSET))(this, value);
		}

		::System::Single get_Limit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_LIMIT_OFFSET))(this);
		}

		::System::Void set_Limit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_LIMIT_OFFSET))(this, value);
		}

		::Spine::ScaleYMode get_ScaleYMode()
		{
			return ((::Spine::ScaleYMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_SCALEYMODE_OFFSET))(this);
		}

		::System::Void set_ScaleYMode(::Spine::ScaleYMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ScaleYMode))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_SCALEYMODE_OFFSET))(this, value);
		}

		::System::Boolean get_InertiaGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_INERTIAGLOBAL_OFFSET))(this);
		}

		::System::Void set_InertiaGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_INERTIAGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_StrengthGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_STRENGTHGLOBAL_OFFSET))(this);
		}

		::System::Void set_StrengthGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_STRENGTHGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_DampingGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_DAMPINGGLOBAL_OFFSET))(this);
		}

		::System::Void set_DampingGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_DAMPINGGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_MassGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_MASSGLOBAL_OFFSET))(this);
		}

		::System::Void set_MassGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_MASSGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_WindGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_WINDGLOBAL_OFFSET))(this);
		}

		::System::Void set_WindGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_WINDGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_GravityGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_GRAVITYGLOBAL_OFFSET))(this);
		}

		::System::Void set_GravityGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_GRAVITYGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_MixGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_GET_MIXGLOBAL_OFFSET))(this);
		}

		::System::Void set_MixGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PHYSICSCONSTRAINTDATA_SET_MIXGLOBAL_OFFSET))(this, value);
		}
	};
}
