#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CRIWARE_CRIMANACONFIG_WEBGLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1672C340)

namespace CriWare
{
	class CriManaConfig_WebGLConfig : public ::System::Object
	{
	public:
		::System::String* webworkerPath; // 0x10
		::System::Int32 heapSize; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG_WEBGLCONFIG_CTOR_OFFSET))(this);
		}

	};
}
