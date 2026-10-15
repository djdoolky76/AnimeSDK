#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_VERSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0169F0)

namespace MiHoYo::SDK
{
	class VersionInfo : public ::System::Object
	{
	public:
		::System::String* client_version; // 0x10
		::System::Int32 sdk_env; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* sdk_version; // 0x20
		::System::String* log_version; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_VERSIONINFO_CTOR_OFFSET))(this);
		}

	};
}
