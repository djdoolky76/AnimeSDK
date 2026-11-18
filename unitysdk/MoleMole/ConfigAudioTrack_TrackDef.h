#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGAUDIOTRACK_TRACKDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1654A0F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAudioTrack_TrackDef_TypeDefinitionIndex = 79301;

	class ConfigAudioTrack_TrackDef : public ::System::Object
	{
	public:
		::System::String* comment; // 0x10
		::System::Int32 maxQueueCount; // 0x18
		::System::Boolean enableQueueTimeout; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single queueTimeoutSeconds; // 0x20
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* members; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGAUDIOTRACK_TRACKDEF__CTOR_OFFSET))(this);
		}
	};
}
