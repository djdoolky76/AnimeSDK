#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Inherit.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_INHERITTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF5D680)
#define SPINE_INHERITTIMELINE_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x1FF5D600)
#define SPINE_INHERITTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1FF5D610)
#define SPINE_INHERITTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FF5D620)
#define SPINE_INHERITTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF5D530)

namespace Spine
{
	inline static constexpr unsigned int InheritTimeline_TypeDefinitionIndex = 32913;

	class InheritTimeline : public ::Spine::Timeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x2; // 0x0
		// static const ::System::Int32 INHERIT = 0x1; // 0x0
		::System::Int32 boneIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 boneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE__CTOR_OFFSET))(this, frameCount, boneIndex);
		}

		::System::Int32 get_BoneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_GET_BONEINDEX_OFFSET))(this);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Spine::Inherit inherit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Spine::Inherit))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_SETFRAME_OFFSET))(this, frame, time, inherit);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_INHERITTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
