#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"

#define SYSTEM_CONTEXTBOUNDOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C196230)

namespace System
{
	class ContextBoundObject : public ::System::MarshalByRefObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONTEXTBOUNDOBJECT_CTOR_OFFSET))(this);
		}

	};
}
