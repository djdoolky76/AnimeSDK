#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB653D0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS82_0__GETCONSTRAINTLASTPOSINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1FB653E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase___c__DisplayClass82_0_TypeDefinitionIndex = 38131;

	class SkeletonRootMotionBase___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::Int32 constraintIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConstraintLastPosIndex_b__0(::System::Int32 addedIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS82_0__GETCONSTRAINTLASTPOSINDEX_B__0_OFFSET))(this, addedIndex);
		}
	};
}
