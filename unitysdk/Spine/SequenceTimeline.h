#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/SequenceMode.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Attachment; }
namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SEQUENCETIMELINE_APPLYTOSLOT_OFFSET UNITYSDK_OFFSET(0x1FE5E120)
#define SPINE_SEQUENCETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE5DC70)
#define SPINE_SEQUENCETIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE5DBC0)
#define SPINE_SEQUENCETIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FE5DBA0)
#define SPINE_SEQUENCETIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1FE5DBB0)
#define SPINE_SEQUENCETIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FE5DBD0)
#define SPINE_SEQUENCETIMELINE_SETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1FE5E0B0)
#define SPINE_SEQUENCETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5D9B0)

namespace Spine
{
	inline static constexpr unsigned int SequenceTimeline_TypeDefinitionIndex = 32922;

	class SequenceTimeline : public ::Spine::Timeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x3; // 0x0
		// static const ::System::Int32 MODE = 0x1; // 0x0
		// static const ::System::Int32 DELAY = 0x2; // 0x0
		::Spine::Attachment* attachment; // 0x28
		::System::Int32 slotIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 slotIndex, ::Spine::Attachment* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE__CTOR_OFFSET))(this, frameCount, slotIndex, attachment);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Spine::Attachment* get_Attachment()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Spine::SequenceMode mode, ::System::Int32 index, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Spine::SequenceMode, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_SETFRAME_OFFSET))(this, frame, time, mode, index, delay);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}

		::System::Void SetupPose(::Spine::Slot* slot, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_SETUPPOSE_OFFSET))(this, slot, appliedPose);
		}

		::System::Void ApplyToSlot(::Spine::Slot* slot, ::System::Boolean appliedPose, ::System::Single time, ::System::Single before, ::System::Int32 modeAndIndex, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_APPLYTOSLOT_OFFSET))(this, slot, appliedPose, time, before, modeAndIndex, delay);
		}
	};
}
