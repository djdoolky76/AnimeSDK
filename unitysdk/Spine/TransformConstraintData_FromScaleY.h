#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformConstraintData_FromProperty.h"

namespace Spine { class BonePose; }
namespace Spine { class Skeleton; }

#define SPINE_TRANSFORMCONSTRAINTDATA_FROMSCALEY_VALUE_OFFSET UNITYSDK_OFFSET(0x1FA19DD0)
#define SPINE_TRANSFORMCONSTRAINTDATA_FROMSCALEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA19EA0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_FromScaleY_TypeDefinitionIndex = 33085;

	class TransformConstraintData_FromScaleY : public ::Spine::TransformConstraintData_FromProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_FROMSCALEY__CTOR_OFFSET))(this);
		}

		::System::Single Value(::Spine::Skeleton* skeleton, ::Spine::BonePose* source, ::System::Boolean local, ::Il2CppArray<::System::Single>* offsets)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Skeleton*, ::Spine::BonePose*, ::System::Boolean, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_FROMSCALEY_VALUE_OFFSET))(this, skeleton, source, local, offsets);
		}
	};
}
