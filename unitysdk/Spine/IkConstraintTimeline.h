#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1ECA59A0)
#define SPINE_IKCONSTRAINTTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA5770)
#define SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1ECA58C0)
#define SPINE_IKCONSTRAINTTIMELINE_GET_IKCONSTRAINTINDEX_OFFSET UNITYSDK_OFFSET(0x1ECA58D0)
#define SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1ECA58E0)

namespace Spine
{
	class IkConstraintTimeline : public ::Spine::CurveTimeline
	{
	public:
		::System::Int32 ikConstraintIndex; // 0x28
		// static const ::System::Object ENTRIES; // 0x0
		// static const ::System::Object MIX; // 0x0
		// static const ::System::Object SOFTNESS; // 0x0
		// static const ::System::Object BEND_DIRECTION; // 0x0
		// static const ::System::Object COMPRESS; // 0x0
		// static const ::System::Object STRETCH; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_IkConstraintIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_GET_IKCONSTRAINTINDEX_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
}
