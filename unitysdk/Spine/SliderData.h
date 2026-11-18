#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine { class Animation; }
namespace Spine { class BoneData; }
namespace Spine { class IConstraint; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintData_FromProperty; }
namespace System { class String; }

#define SPINE_SLIDERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1FE0EAD0)
#define SPINE_SLIDERDATA_GET_ADDITIVE_OFFSET UNITYSDK_OFFSET(0x1FE0EB50)
#define SPINE_SLIDERDATA_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1FE0EB30)
#define SPINE_SLIDERDATA_GET_BONE_OFFSET UNITYSDK_OFFSET(0x1FE0EB90)
#define SPINE_SLIDERDATA_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x1FE0EC10)
#define SPINE_SLIDERDATA_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1FE0EB70)
#define SPINE_SLIDERDATA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1FE0EBD0)
#define SPINE_SLIDERDATA_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1FE0EBB0)
#define SPINE_SLIDERDATA_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1FE0EBF0)
#define SPINE_SLIDERDATA_SET_ADDITIVE_OFFSET UNITYSDK_OFFSET(0x1FE0EB60)
#define SPINE_SLIDERDATA_SET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1FE0EB40)
#define SPINE_SLIDERDATA_SET_BONE_OFFSET UNITYSDK_OFFSET(0x1FE0EBA0)
#define SPINE_SLIDERDATA_SET_LOCAL_OFFSET UNITYSDK_OFFSET(0x1FE0EC20)
#define SPINE_SLIDERDATA_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1FE0EB80)
#define SPINE_SLIDERDATA_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1FE0EBE0)
#define SPINE_SLIDERDATA_SET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1FE0EBC0)
#define SPINE_SLIDERDATA_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1FE0EC00)
#define SPINE_SLIDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0EA20)

namespace Spine
{
	inline static constexpr unsigned int SliderData_TypeDefinitionIndex = 33067;

	class SliderData
	{
	public:
		::Spine::BoneData* bone; // 0x28
		::Spine::TransformConstraintData_FromProperty* property; // 0x30
		::Spine::Animation* animation; // 0x38
		::System::Boolean additive; // 0x40
		::System::Boolean local; // 0x41
		::System::Boolean loop; // 0x42
		::System::Byte _padding0[0x1];
		::System::Single scale; // 0x44
		::System::Single offset; // 0x48

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::IConstraint* Create(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_CREATE_OFFSET))(this, skeleton);
		}

		::Spine::Animation* get_Animation()
		{
			return ((::Spine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_ANIMATION_OFFSET))(this);
		}

		::System::Void set_Animation(::Spine::Animation* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_ANIMATION_OFFSET))(this, value);
		}

		::System::Boolean get_Additive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_ADDITIVE_OFFSET))(this);
		}

		::System::Void set_Additive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_ADDITIVE_OFFSET))(this, value);
		}

		::System::Boolean get_Loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_Loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_LOOP_OFFSET))(this, value);
		}

		::Spine::BoneData* get_Bone()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_BONE_OFFSET))(this);
		}

		::System::Void set_Bone(::Spine::BoneData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_BONE_OFFSET))(this, value);
		}

		::Spine::TransformConstraintData_FromProperty* get_Property()
		{
			return ((::Spine::TransformConstraintData_FromProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_PROPERTY_OFFSET))(this);
		}

		::System::Void set_Property(::Spine::TransformConstraintData_FromProperty* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraintData_FromProperty*))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_PROPERTY_OFFSET))(this, value);
		}

		::System::Single get_Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_OFFSET_OFFSET))(this, value);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_SCALE_OFFSET))(this, value);
		}

		::System::Boolean get_Local()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_GET_LOCAL_OFFSET))(this);
		}

		::System::Void set_Local(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLIDERDATA_SET_LOCAL_OFFSET))(this, value);
		}
	};
}
