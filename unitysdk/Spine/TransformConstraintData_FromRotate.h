#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformConstraintData_FromProperty.h"

namespace Spine { class BonePose; }
namespace Spine { class Skeleton; }

#define SPINE_TRANSFORMCONSTRAINTDATA_FROMROTATE_VALUE_OFFSET UNITYSDK_OFFSET(0x1FF61DB0)
#define SPINE_TRANSFORMCONSTRAINTDATA_FROMROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF61FA0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_FromRotate_TypeDefinitionIndex = 33077;

	class TransformConstraintData_FromRotate : public ::Spine::TransformConstraintData_FromProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_FROMROTATE__CTOR_OFFSET))(this);
		}

		::System::Single Value(::Spine::Skeleton* skeleton, ::Spine::BonePose* source, ::System::Boolean local, ::Il2CppArray<::System::Single>* offsets)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Skeleton*, ::Spine::BonePose*, ::System::Boolean, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_FROMROTATE_VALUE_OFFSET))(this, skeleton, source, local, offsets);
		}
	};
}
