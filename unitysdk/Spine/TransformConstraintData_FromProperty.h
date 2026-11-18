#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_TRANSFORMCONSTRAINTDATA_FROMPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF5F8C0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_FromProperty_TypeDefinitionIndex = 33075;

	class TransformConstraintData_FromProperty : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Object*>* to; // 0x10
		::System::Single offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_FROMPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
