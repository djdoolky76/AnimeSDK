#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_OPENEDHOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA5DB0)

namespace System::Xml
{
	class OpenedHost : public ::System::Object
	{
	public:
		::System::Int32 nonCachedConnectionsCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_OPENEDHOST_CTOR_OFFSET))(this);
		}

	};
}
