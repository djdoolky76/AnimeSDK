#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Event; }
namespace System { class String; }

#define SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1FAB6940)
#define SPINE_EVENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FAB6930)
#define SPINE_EVENTDATA_GET_SETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1FAB6920)
#define SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1FAB6950)
#define SPINE_EVENTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAB6A10)
#define SPINE_EVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB6960)

namespace Spine
{
	inline static constexpr unsigned int EventData_TypeDefinitionIndex = 32993;

	class EventData : public ::System::Object
	{
	public:
		::Spine::Event* setupPose; // 0x10
		::System::String* _AudioPath_k__BackingField; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::Event* get_SetupPose()
		{
			return ((::Spine::Event*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_SETUPPOSE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_AudioPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_GET_AUDIOPATH_OFFSET))(this);
		}

		::System::Void set_AudioPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_SET_AUDIOPATH_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
