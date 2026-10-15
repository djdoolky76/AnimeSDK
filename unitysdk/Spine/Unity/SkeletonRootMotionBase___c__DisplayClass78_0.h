#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS78_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED2C4E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS78_0__GETCONSTRAINTLASTPOSINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x1ED2D760)

namespace Spine::Unity
{
	class SkeletonRootMotionBase___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Int32 constraintIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS78_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConstraintLastPosIndex_b__0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE___C__DISPLAYCLASS78_0__GETCONSTRAINTLASTPOSINDEX_B__0_OFFSET))(this, a1);
		}

	};
}
