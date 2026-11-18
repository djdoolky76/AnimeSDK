#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_DRAWORDERTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF91910)
#define SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET UNITYSDK_OFFSET(0x1FF91840)
#define SPINE_DRAWORDERTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1FF91820)
#define SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1FF91850)
#define SPINE_DRAWORDERTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF91B70)
#define SPINE_DRAWORDERTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF916F0)

namespace Spine
{
	inline static constexpr unsigned int DrawOrderTimeline_TypeDefinitionIndex = 32924;

	class DrawOrderTimeline : public ::Spine::Timeline
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet_propertyIds()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(DrawOrderTimeline_TypeDefinitionIndex)->GetStaticField(0x29BF0);
		}
		static ::System::UInt64* StaticGet_propertyID()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(DrawOrderTimeline_TypeDefinitionIndex)->GetStaticField(0x8540);
		}
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* drawOrders; // 0x28

		::System::Void _ctor(::System::Int32 frameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE__CTOR_OFFSET))(this, frameCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE__CCTOR_OFFSET))();
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::Int32>*>* get_DrawOrders()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_GET_DRAWORDERS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Il2CppArray<::System::Int32>* drawOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_SETFRAME_OFFSET))(this, frame, time, drawOrder);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}
	};
}
