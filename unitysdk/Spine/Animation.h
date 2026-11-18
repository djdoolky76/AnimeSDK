#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixFrom.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class Timeline; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define SPINE_ANIMATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1FAB5300)
#define SPINE_ANIMATION_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1FAB52F0)
#define SPINE_ANIMATION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1FAB52D0)
#define SPINE_ANIMATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FAB54E0)
#define SPINE_ANIMATION_GET_TIMELINES_OFFSET UNITYSDK_OFFSET(0x1FAB4F50)
#define SPINE_ANIMATION_HASTIMELINE_OFFSET UNITYSDK_OFFSET(0x1FAB5250)
#define SPINE_ANIMATION_SETTIMELINES_OFFSET UNITYSDK_OFFSET(0x1FAB4F60)
#define SPINE_ANIMATION_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1FAB52E0)
#define SPINE_ANIMATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAB54F0)
#define SPINE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB4EE0)

namespace Spine
{
	inline static constexpr unsigned int Animation_TypeDefinitionIndex = 32893;

	class Animation : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Int32>* bones; // 0x10
		::System::String* name; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt64>* timelineIds; // 0x20
		::Spine::ExposedList_1<::Spine::Timeline*>* timelines; // 0x28
		::System::Single duration; // 0x30

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION__CTOR_OFFSET))(this, name);
		}

		::Spine::ExposedList_1<::Spine::Timeline*>* get_Timelines()
		{
			return ((::Spine::ExposedList_1<::Spine::Timeline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_TIMELINES_OFFSET))(this);
		}

		::System::Void SetTimelines(::Spine::ExposedList_1<::Spine::Timeline*>* timelines, ::Spine::ExposedList_1<::System::Int32>* bones)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Timeline*>*, ::Spine::ExposedList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SETTIMELINES_OFFSET))(this, timelines, bones);
		}

		::System::Boolean HasTimeline(::Il2CppArray<::System::UInt64>* propertyIds)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_HASTIMELINE_OFFSET))(this, propertyIds);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_SET_DURATION_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::System::Int32>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_BONES_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::System::Boolean loop, ::Spine::ExposedList_1<::Spine::Event*>* events, ::System::Single alpha, ::Spine::MixFrom from, ::System::Boolean add, ::System::Boolean mixOut, ::System::Boolean appliedPose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::System::Boolean, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixFrom, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_APPLY_OFFSET))(this, skeleton, lastTime, time, loop, events, alpha, from, add, mixOut, appliedPose);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_GET_NAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ANIMATION_TOSTRING_OFFSET))(this);
		}
	};
}
