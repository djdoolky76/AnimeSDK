#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformConstraintData_ToProperty.h"

namespace Spine { class BonePose; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintPose; }

#define SPINE_TRANSFORMCONSTRAINTDATA_TOROTATE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA82C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_TOROTATE_MIX_OFFSET UNITYSDK_OFFSET(0x1FFA82A0)
#define SPINE_TRANSFORMCONSTRAINTDATA_TOROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA8580)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_ToRotate_TypeDefinitionIndex = 33078;

	class TransformConstraintData_ToRotate : public ::Spine::TransformConstraintData_ToProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOROTATE__CTOR_OFFSET))(this);
		}

		::System::Single Mix(::Spine::TransformConstraintPose* pose)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::TransformConstraintPose*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOROTATE_MIX_OFFSET))(this, pose);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::Spine::TransformConstraintPose* pose, ::Spine::BonePose* bone, ::System::Single value, ::System::Boolean local, ::System::Boolean additive)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::TransformConstraintPose*, ::Spine::BonePose*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOROTATE_APPLY_OFFSET))(this, skeleton, pose, bone, value, local, additive);
		}
	};
}
