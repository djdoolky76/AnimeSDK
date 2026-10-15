#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_RGBATIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1ECADA50)
#define SPINE_RGBATIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAD800)
#define SPINE_RGBATIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1ECAD9A0)
#define SPINE_RGBATIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1ECAD9B0)
#define SPINE_RGBATIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1ECAD9C0)

namespace Spine
{
	class RGBATimeline : public ::Spine::CurveTimeline
	{
	public:
		::System::Int32 slotIndex; // 0x28
		// static const ::System::Object ENTRIES; // 0x0
		// static const ::System::Object R; // 0x0
		// static const ::System::Object G; // 0x0
		// static const ::System::Object B; // 0x0
		// static const ::System::Object A; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_RGBATIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
}
