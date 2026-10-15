#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CRIWARE_CRIFSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x16703CC0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsConfig_TypeDefinitionIndex = 40151;

	class CriFsConfig : public ::System::Object
	{
	public:
		::System::Int32 numberOfLoaders; // 0x10
		::System::Int32 numberOfBinders; // 0x14
		::System::Int32 numberOfInstallers; // 0x18
		::System::Int32 installBufferSize; // 0x1C
		::System::Int32 maxPath; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* userAgentString; // 0x28
		::System::Boolean minimizeFileDescriptorUsage; // 0x30
		::System::Boolean enableCrcCheck; // 0x31
		::System::Byte _padding1[0x2];
		::System::Int32 androidDeviceReadBitrate; // 0x34
		// static const ::System::Object defaultAndroidDeviceReadBitrate; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSCONFIG_CTOR_OFFSET))(this);
		}

	};
}
