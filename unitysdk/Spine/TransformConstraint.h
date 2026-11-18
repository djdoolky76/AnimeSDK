#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Physics.h"

namespace Spine { class Bone; }
namespace Spine { class BonePose; }
namespace Spine { class IConstraint; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintData; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_TRANSFORMCONSTRAINT_COPY_OFFSET UNITYSDK_OFFSET(0x1FF92780)
#define SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1FF931D0)
#define SPINE_TRANSFORMCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET UNITYSDK_OFFSET(0x1FF931B0)
#define SPINE_TRANSFORMCONSTRAINT_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1FF931E0)
#define SPINE_TRANSFORMCONSTRAINT_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1FF931F0)
#define SPINE_TRANSFORMCONSTRAINT_SORT_OFFSET UNITYSDK_OFFSET(0x1FF92FA0)
#define SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FF92820)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF92440)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraint_TypeDefinitionIndex = 33073;

	class TransformConstraint
	{
	public:
		::Spine::ExposedList_1<::Spine::BonePose*>* bones; // 0x38
		::Spine::Bone* source; // 0x40

		::System::Void _ctor(::Spine::TransformConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::Spine::IConstraint* Copy(::Spine::Skeleton* skeleton)
		{
			return ((::Spine::IConstraint*(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_COPY_OFFSET))(this, skeleton);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET))(this, skeleton, physics);
		}

		::System::Void Sort(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SORT_OFFSET))(this, skeleton);
		}

		::System::Boolean get_IsSourceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_ISSOURCEACTIVE_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::BonePose*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BonePose*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Bone* get_Source()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::Spine::Bone* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_SOURCE_OFFSET))(this, value);
		}
	};
}
