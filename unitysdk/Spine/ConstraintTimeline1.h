#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline1.h"
#include "unitysdk/Spine/Property.h"

#define SPINE_CONSTRAINTTIMELINE1_GET_CONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1FF5D520)
#define SPINE_CONSTRAINTTIMELINE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF5D490)

namespace Spine
{
	inline static constexpr unsigned int ConstraintTimeline1_TypeDefinitionIndex = 32929;

	class ConstraintTimeline1 : public ::Spine::CurveTimeline1
	{
	public:
		::System::Int32 constraintIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 constraintIndex, ::Spine::Property property)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Spine::Property))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTTIMELINE1__CTOR_OFFSET))(this, frameCount, bezierCount, constraintIndex, property);
		}

		::System::Int32 get_ConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_CONSTRAINTTIMELINE1_GET_CONSTRAINTINDEX_OFFSET))(this);
		}
	};
}
