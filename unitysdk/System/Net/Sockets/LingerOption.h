#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SOCKETS_LINGEROPTION_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E0CBFD0)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_GET_LINGERTIME_OFFSET UNITYSDK_OFFSET(0x1E0CBFF0)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1E0CBFE0)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET UNITYSDK_OFFSET(0x1E0CC000)
#define SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CBFC0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int LingerOption_TypeDefinitionIndex = 3644;

	class LingerOption : public ::System::Object
	{
	public:
		::System::Int32 lingerTime; // 0x10
		::System::Boolean enabled; // 0x14

		::System::Void _ctor(::System::Boolean enable, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET))(this, enable, seconds);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Int32 get_LingerTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_GET_LINGERTIME_OFFSET))(this);
		}

		::System::Void set_LingerTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET))(this, value);
		}
	};
}
