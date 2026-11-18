#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class SlotPose; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FFA68C0)
#define SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET UNITYSDK_OFFSET(0x1FFA6850)
#define SPINE_ATTACHMENTTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1FFA6820)
#define SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1FFA6840)
#define SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FFA6B70)
#define SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FFA6860)
#define SPINE_ATTACHMENTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA6730)

namespace Spine
{
	inline static constexpr unsigned int AttachmentTimeline_TypeDefinitionIndex = 32920;

	class AttachmentTimeline : public ::Spine::Timeline
	{
	public:
		::Il2CppArray<::System::String*>* attachmentNames; // 0x28
		::System::Int32 slotIndex; // 0x30

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE__CTOR_OFFSET))(this, frameCount, slotIndex);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AttachmentNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::String* attachmentName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET))(this, frame, time, attachmentName);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}

		::System::Void SetAttachment(::Spine::Skeleton* skeleton, ::Spine::SlotPose* pose, ::System::String* attachmentName)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::SlotPose*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET))(this, skeleton, pose, attachmentName);
		}
	};
}
