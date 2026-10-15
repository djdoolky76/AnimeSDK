#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class EventArgs; }

#define SYSTEM_EVENTARGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C20C590)
#define SYSTEM_EVENTARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DB260)

namespace System
{
	class EventArgs : public ::System::Object
	{
	public:
		static ::System::EventArgs** StaticGet_Empty()
		{
			return (::System::EventArgs**)UnitySDK::FromName("System", "EventArgs")->GetStaticField(0x121D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EVENTARGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_EVENTARGS_CCTOR_OFFSET))();
		}

	};
}
