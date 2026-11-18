#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformConstraintData_ToProperty.h"

namespace Spine { class BonePose; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintPose; }

#define SPINE_TRANSFORMCONSTRAINTDATA_TOSHEARY_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE0ED20)
#define SPINE_TRANSFORMCONSTRAINTDATA_TOSHEARY_MIX_OFFSET UNITYSDK_OFFSET(0x1FE0ED00)
#define SPINE_TRANSFORMCONSTRAINTDATA_TOSHEARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0EFF0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_ToShearY_TypeDefinitionIndex = 33088;

	class TransformConstraintData_ToShearY : public ::Spine::TransformConstraintData_ToProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOSHEARY__CTOR_OFFSET))(this);
		}

		::System::Single Mix(::Spine::TransformConstraintPose* pose)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TransformConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOSHEARY_MIX_OFFSET))(this, pose);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::Spine::TransformConstraintPose* pose, ::Spine::BonePose* bone, ::System::Single value, ::System::Boolean local, ::System::Boolean additive)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::TransformConstraintPose*, ::Spine::BonePose*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOSHEARY_APPLY_OFFSET))(this, skeleton, pose, bone, value, local, additive);
		}
	};
}
