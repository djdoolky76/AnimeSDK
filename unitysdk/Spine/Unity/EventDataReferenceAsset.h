#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace Spine { class EventData; }
namespace Spine::Unity { class EventDataReferenceAsset; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }

#define SPINE_UNITY_EVENTDATAREFERENCEASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED06450)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_GET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0x1ED061F0)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED06220)
#define SPINE_UNITY_EVENTDATAREFERENCEASSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ED06410)

namespace Spine::Unity
{
	class EventDataReferenceAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x18
		::System::String* eventName; // 0x20
		::Spine::EventData* eventData; // 0x28
		// static const ::System::Object QuietSkeletonData; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_CTOR_OFFSET))(this);
		}

		::Spine::EventData* get_EventData()
		{
			return ((::Spine::EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_GET_EVENTDATA_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_INITIALIZE_OFFSET))(this);
		}

		static ::Spine::EventData* op_Implicit(::Spine::Unity::EventDataReferenceAsset* a1)
		{
			return ((::Spine::EventData*(*)(::Spine::Unity::EventDataReferenceAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_EVENTDATAREFERENCEASSET_OP_IMPLICIT_OFFSET))(a1);
		}

	};
}
