#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Ports/SerialError.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E0B9D80)
#define SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B9D40)

namespace System::IO::Ports
{
	inline static constexpr unsigned int SerialErrorReceivedEventArgs_TypeDefinitionIndex = 4157;

	class SerialErrorReceivedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS__CTOR_OFFSET))(this);
		}

		::System::IO::Ports::SerialError get_EventType()
		{
			return ((::System::IO::Ports::SerialError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PORTS_SERIALERRORRECEIVEDEVENTARGS_GET_EVENTTYPE_OFFSET))(this);
		}
	};
}
