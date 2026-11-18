#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_EVENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F8B9DD0)
#define SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1F8B9CF0)
#define SPINE_EVENTTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1F8B9CD0)
#define SPINE_EVENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1F8B9D00)
#define SPINE_EVENTTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8BA030)
#define SPINE_EVENTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B9BA0)

namespace Spine
{
	inline static constexpr unsigned int EventTimeline_TypeDefinitionIndex = 32923;

	class EventTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(EventTimeline_TypeDefinitionIndex)->GetStaticField(0x29C00);
		}
		::Il2CppArray<::Spine::Event*>* events; // 0x28

		::System::Void _ctor(::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE__CTOR_OFFSET))(this, frameCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE__CCTOR_OFFSET))();
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::Spine::Event*>* get_Events()
		{
			return ((::Il2CppArray<::Spine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_GET_EVENTS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_SETFRAME_OFFSET))(this, frame, e);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_EVENTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, from, add, mixOut, appliedPose);
		}
	};
}
