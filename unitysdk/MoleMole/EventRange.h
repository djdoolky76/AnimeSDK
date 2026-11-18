#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLKENEMADBD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_EVENTRANGE_GET_TIMEOFFSETSECONDS_OFFSET UNITYSDK_OFFSET(0x139D1BE0)
#define MOLEMOLE_EVENTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x139D1BF0)

namespace MoleMole
{
	inline static constexpr unsigned int EventRange_TypeDefinitionIndex = 92104;

	class EventRange : public ::System::Object
	{
	public:
		::System::String* TrackId; // 0x10
		::GLKENEMADBD Type; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double StartBeat; // 0x20
		::System::Double EndBeat; // 0x28
		::System::Int32 TimeOffsetMs; // 0x30
		::System::Byte _padding1[0x4];
		::System::Double StartTimeSeconds; // 0x38
		::System::Double EndTimeSeconds; // 0x40
		::System::Int32 BoundNoteLaneId; // 0x48
		::System::Byte _padding2[0x4];
		::System::String* PerformSignalDesc; // 0x50
		::System::String* EventKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EVENTRANGE__CTOR_OFFSET))(this);
		}

		::System::Double get_TimeOffsetSeconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EVENTRANGE_GET_TIMEOFFSETSECONDS_OFFSET))(this);
		}
	};
}
