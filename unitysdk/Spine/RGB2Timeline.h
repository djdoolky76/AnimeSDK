#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/SlotCurveTimeline.h"

namespace Spine { class Slot; }
namespace Spine { class SlotPose; }

#define SPINE_RGB2TIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF5DB00)
#define SPINE_RGB2TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FF5D9B0)
#define SPINE_RGB2TIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FF5D9C0)
#define SPINE_RGB2TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF5D8F0)

namespace Spine
{
	inline static constexpr unsigned int RGB2Timeline_TypeDefinitionIndex = 32919;

	class RGB2Timeline : public ::Spine::SlotCurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x7; // 0x0
		// static const ::System::Int32 R = 0x1; // 0x0
		// static const ::System::Int32 G = 0x2; // 0x0
		// static const ::System::Int32 B = 0x3; // 0x0
		// static const ::System::Int32 R2 = 0x4; // 0x0
		// static const ::System::Int32 G2 = 0x5; // 0x0
		// static const ::System::Int32 B2 = 0x6; // 0x0

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single r, ::System::Single g, ::System::Single b, ::System::Single r2, ::System::Single g2, ::System::Single b2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_SETFRAME_OFFSET))(this, frame, time, r, g, b, r2, g2, b2);
		}

		::System::Void Apply(::Spine::Slot* slot, ::Spine::SlotPose* pose, ::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Spine::SlotPose*, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_APPLY_OFFSET))(this, slot, pose, time, alpha, from, add);
		}
	};
}
