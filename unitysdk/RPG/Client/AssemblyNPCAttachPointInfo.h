#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_ASSEMBLYNPCATTACHPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC69C7A0)

namespace RPG::Client
{
	class AssemblyNPCAttachPointInfo : public ::System::Object
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::String* AttachPointPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMBLYNPCATTACHPOINTINFO_CTOR_OFFSET))(this);
		}

	};
}
