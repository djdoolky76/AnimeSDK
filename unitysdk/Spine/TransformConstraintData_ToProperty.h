#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_TRANSFORMCONSTRAINTDATA_TOPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA8290)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_ToProperty_TypeDefinitionIndex = 33076;

	class TransformConstraintData_ToProperty : public ::System::Object
	{
	public:
		::System::Single scale; // 0x10
		::System::Single max; // 0x14
		::System::Single offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_TOPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
