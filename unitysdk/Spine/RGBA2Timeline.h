#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/SlotCurveTimeline.h"

namespace Spine { class Slot; }
namespace Spine { class SlotPose; }

#define SPINE_RGBA2TIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1EBF0E90)
#define SPINE_RGBA2TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1EBF0D00)
#define SPINE_RGBA2TIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1EBF0D10)
#define SPINE_RGBA2TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF0C20)

namespace Spine
{
	inline static constexpr unsigned int RGBA2Timeline_TypeDefinitionIndex = 32918;

	class RGBA2Timeline : public ::Spine::SlotCurveTimeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x8; // 0x0
		// static const ::System::Int32 R = 0x1; // 0x0
		// static const ::System::Int32 G = 0x2; // 0x0
		// static const ::System::Int32 B = 0x3; // 0x0
		// static const ::System::Int32 A = 0x4; // 0x0
		// static const ::System::Int32 R2 = 0x5; // 0x0
		// static const ::System::Int32 G2 = 0x6; // 0x0
		// static const ::System::Int32 B2 = 0x7; // 0x0

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a, ::System::Single r2, ::System::Single g2, ::System::Single b2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_SETFRAME_OFFSET))(this, frame, time, r, g, b, a, r2, g2, b2);
		}

		::System::Void Apply(::Spine::Slot* slot, ::Spine::SlotPose* pose, ::System::Single time, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Spine::SlotPose*, ::System::Single, ::System::Single, ::Spine::MixFrom, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_RGBA2TIMELINE_APPLY_OFFSET))(this, slot, pose, time, alpha, from, add);
		}
	};
}
