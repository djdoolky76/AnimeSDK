#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_RGB2TIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1ECABE00)
#define SPINE_RGB2TIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECABB70)
#define SPINE_RGB2TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1ECABD10)
#define SPINE_RGB2TIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1ECABD20)
#define SPINE_RGB2TIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1ECABD30)

namespace Spine
{
	inline static constexpr unsigned int RGB2Timeline_TypeDefinitionIndex = 39617;

	class RGB2Timeline : public ::Spine::CurveTimeline
	{
	public:
		::System::Int32 slotIndex; // 0x28
		// static const ::System::Object ENTRIES; // 0x0
		// static const ::System::Object R; // 0x0
		// static const ::System::Object G; // 0x0
		// static const ::System::Object B; // 0x0
		// static const ::System::Object R2; // 0x0
		// static const ::System::Object G2; // 0x0
		// static const ::System::Object B2; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_RGB2TIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
}
