#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixFrom.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { class VertexAttachment; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_DEFORMTIMELINE_APPLYBEFOREFIRST_OFFSET UNITYSDK_OFFSET(0x1FE0CC60)
#define SPINE_DEFORMTIMELINE_APPLYTOSLOT_OFFSET UNITYSDK_OFFSET(0x1FE0CF30)
#define SPINE_DEFORMTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FE0C850)
#define SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET UNITYSDK_OFFSET(0x1FE0C570)
#define SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0C280)
#define SPINE_DEFORMTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1FE0C250)
#define SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1FE0C270)
#define SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1FE0C290)
#define SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1FE0C360)
#define SPINE_DEFORMTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FE0C2A0)
#define SPINE_DEFORMTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0C180)

namespace Spine
{
	inline static constexpr unsigned int DeformTimeline_TypeDefinitionIndex = 32921;

	class DeformTimeline : public ::Spine::CurveTimeline
	{
	public:
		::Spine::VertexAttachment* attachment; // 0x30
		::Il2CppArray<::Il2CppArray<::System::Single>*>* vertices; // 0x38
		::System::Int32 slotIndex; // 0x40

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex, ::Spine::VertexAttachment* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex, attachment);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Spine::VertexAttachment* get_Attachment()
		{
			return ((::Spine::VertexAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::Single>*>* get_Vertices()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Single>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Il2CppArray<::System::Single>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETFRAME_OFFSET))(this, frame, time, vertices);
		}

		::System::Void SetBezier(::System::Int32 bezier, ::System::Int32 frame, ::System::Int32 value, ::System::Single time1, ::System::Single value1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single time2, ::System::Single value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET))(this, bezier, frame, value, time1, value1, cx1, cy1, cx2, cy2, time2, value2);
		}

		::System::Single GetCurvePercent(::System::Single time, ::System::Int32 frame)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET))(this, time, frame);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}

		::System::Void ApplyBeforeFirst(::Spine::Slot* slot, ::System::Boolean appliedPose, ::System::Single alpha, ::Spine::MixFrom from)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Boolean, ::System::Single, ::Spine::MixFrom))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_APPLYBEFOREFIRST_OFFSET))(this, slot, appliedPose, alpha, from);
		}

		::System::Void ApplyToSlot(::Spine::Slot* slot, ::System::Boolean appliedPose, ::Il2CppArray<::System::Single>* v1, ::Il2CppArray<::System::Single>* v2, ::System::Single percent, ::System::Int32 vertexCount, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::System::Boolean, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32, ::System::Single, ::Spine::MixFrom, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_APPLYTOSLOT_OFFSET))(this, slot, appliedPose, v1, v2, percent, vertexCount, alpha, from, add);
		}
	};
}
