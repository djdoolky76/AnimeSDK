#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine { class BoneData; }
namespace Spine { class IConstraint; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class Object; }
namespace System { class String; }

#define SPINE_TRANSFORMCONSTRAINTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1FDD1340)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_ADDITIVE_OFFSET UNITYSDK_OFFSET(0x1FDD1780)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1FDD13A0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_CLAMP_OFFSET UNITYSDK_OFFSET(0x1FDD17A0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCALSOURCE_OFFSET UNITYSDK_OFFSET(0x1FDD1740)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCALTARGET_OFFSET UNITYSDK_OFFSET(0x1FDD1760)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1FDD1440)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEX_OFFSET UNITYSDK_OFFSET(0x1FDD15C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEY_OFFSET UNITYSDK_OFFSET(0x1FDD1640)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSHEARY_OFFSET UNITYSDK_OFFSET(0x1FDD16C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x1FDD14C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x1FDD1540)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1FDD17C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1FDD13B0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_ADDITIVE_OFFSET UNITYSDK_OFFSET(0x1FDD1790)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_CLAMP_OFFSET UNITYSDK_OFFSET(0x1FDD17B0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCALSOURCE_OFFSET UNITYSDK_OFFSET(0x1FDD1750)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCALTARGET_OFFSET UNITYSDK_OFFSET(0x1FDD1770)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1FDD1480)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEX_OFFSET UNITYSDK_OFFSET(0x1FDD1600)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEY_OFFSET UNITYSDK_OFFSET(0x1FDD1680)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSHEARY_OFFSET UNITYSDK_OFFSET(0x1FDD1700)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x1FDD1500)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x1FDD1580)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1FDD13C0)
#define SPINE_TRANSFORMCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD1240)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_TypeDefinitionIndex = 33074;

	class TransformConstraintData
	{
	public:
		// static const ::System::Int32 ROTATION = 0x0; // 0x0
		// static const ::System::Int32 X = 0x1; // 0x0
		// static const ::System::Int32 Y = 0x2; // 0x0
		// static const ::System::Int32 SCALEX = 0x3; // 0x0
		// static const ::System::Int32 SCALEY = 0x4; // 0x0
		// static const ::System::Int32 SHEARY = 0x5; // 0x0
		::Spine::ExposedList_1<::System::Object*>* properties; // 0x28
		::Spine::BoneData* source; // 0x30
		::Il2CppArray<::System::Single>* offsets; // 0x38
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x40
		::System::Boolean localTarget; // 0x48
		::System::Boolean additive; // 0x49
		::System::Boolean clamp; // 0x4A
		::System::Boolean localSource; // 0x4B

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::IConstraint* Create(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_CREATE_OFFSET))(this, skeleton);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::BoneData* get_Source()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::Spine::BoneData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_SOURCE_OFFSET))(this, value);
		}

		::System::Single get_OffsetRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_OffsetRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET))(this, value);
		}

		::System::Single get_OffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETX_OFFSET))(this);
		}

		::System::Void set_OffsetX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETX_OFFSET))(this, value);
		}

		::System::Single get_OffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETY_OFFSET))(this);
		}

		::System::Void set_OffsetY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETY_OFFSET))(this, value);
		}

		::System::Single get_OffsetScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEX_OFFSET))(this);
		}

		::System::Void set_OffsetScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEX_OFFSET))(this, value);
		}

		::System::Single get_OffsetScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEY_OFFSET))(this);
		}

		::System::Void set_OffsetScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEY_OFFSET))(this, value);
		}

		::System::Single get_OffsetShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSHEARY_OFFSET))(this);
		}

		::System::Void set_OffsetShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSHEARY_OFFSET))(this, value);
		}

		::System::Boolean get_LocalSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCALSOURCE_OFFSET))(this);
		}

		::System::Void set_LocalSource(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCALSOURCE_OFFSET))(this, value);
		}

		::System::Boolean get_LocalTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCALTARGET_OFFSET))(this);
		}

		::System::Void set_LocalTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCALTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_Additive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_ADDITIVE_OFFSET))(this);
		}

		::System::Void set_Additive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_ADDITIVE_OFFSET))(this, value);
		}

		::System::Boolean get_Clamp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_CLAMP_OFFSET))(this);
		}

		::System::Void set_Clamp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_CLAMP_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::System::Object*>* get_Properties()
		{
			return ((::Spine::ExposedList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
