#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_DRAWORDERFOLDERTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F774B70)
#define SPINE_DRAWORDERFOLDERTIMELINE_GET_DRAWORDERS_OFFSET UNITYSDK_OFFSET(0x1F774AA0)
#define SPINE_DRAWORDERFOLDERTIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1F774A70)
#define SPINE_DRAWORDERFOLDERTIMELINE_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1F774A90)
#define SPINE_DRAWORDERFOLDERTIMELINE_PROPERTYIDSFROMSLOTS_OFFSET UNITYSDK_OFFSET(0x1F774920)
#define SPINE_DRAWORDERFOLDERTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1F774AB0)
#define SPINE_DRAWORDERFOLDERTIMELINE_SETUP_OFFSET UNITYSDK_OFFSET(0x1F774EE0)
#define SPINE_DRAWORDERFOLDERTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7750D0)
#define SPINE_DRAWORDERFOLDERTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F774780)

namespace Spine
{
	inline static constexpr unsigned int DrawOrderFolderTimeline_TypeDefinitionIndex = 32925;

	class DrawOrderFolderTimeline : public ::Spine::Timeline
	{
	public:
		static ::System::UInt64* StaticGet_propertyID()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(DrawOrderFolderTimeline_TypeDefinitionIndex)->GetStaticField(0x8530);
		}
		::Il2CppArray<::System::Int32>* slots; // 0x28
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* drawOrders; // 0x30
		::Il2CppArray<::System::Boolean>* inFolder; // 0x38

		::System::Void _ctor(::System::Int32 frameCount, ::Il2CppArray<::System::Int32>* slots, ::System::Int32 slotCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE__CTOR_OFFSET))(this, frameCount, slots, slotCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt64>* PropertyIdsFromSlots(::Il2CppArray<::System::Int32>* slots)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_PROPERTYIDSFROMSLOTS_OFFSET))(slots);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Slots()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_GET_SLOTS_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::Int32>*>* get_DrawOrders()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_GET_DRAWORDERS_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Il2CppArray<::System::Int32>* drawOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_SETFRAME_OFFSET))(this, frame, time, drawOrder);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, events, alpha, from, add, mixOut, appliedPose);
		}

		::System::Void Setup(::Il2CppArray<::Spine::Slot*>* pose, ::Il2CppArray<::Spine::Slot*>* setup)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Slot*>*, ::Il2CppArray<::Spine::Slot*>*))((::PBYTE)hIl2Cpp + SPINE_DRAWORDERFOLDERTIMELINE_SETUP_OFFSET))(this, pose, setup);
		}
	};
}
