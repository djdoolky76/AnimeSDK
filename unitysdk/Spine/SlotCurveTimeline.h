#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SLOTCURVETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x20066330)
#define SPINE_SLOTCURVETIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x20066320)
#define SPINE_SLOTCURVETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x20066300)

namespace Spine
{
	inline static constexpr unsigned int SlotCurveTimeline_TypeDefinitionIndex = 32914;

	class SlotCurveTimeline : public ::Spine::CurveTimeline
	{
	public:
		::System::Int32 slotIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex, ::Il2CppArray<::System::UInt64>* propertyIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + SPINE_SLOTCURVETIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex, propertyIds);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTCURVETIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLOTCURVETIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
