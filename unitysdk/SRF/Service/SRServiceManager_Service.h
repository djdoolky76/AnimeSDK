#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }

#define SRF_SERVICE_SRSERVICEMANAGER_SERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED77DB0)

namespace SRF::Service
{
	class SRServiceManager_Service : public ::System::Object
	{
	public:
		::System::Object* Object; // 0x10
		::System::Type* Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SERVICE_SRSERVICEMANAGER_SERVICE_CTOR_OFFSET))(this);
		}

	};
}
