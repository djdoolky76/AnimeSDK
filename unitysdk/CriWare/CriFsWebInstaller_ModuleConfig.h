#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsWebInstaller_ModulePlatformConfig.h"
namespace System { class String; }

namespace CriWare
{
	struct alignas(8) CriFsWebInstaller_ModuleConfig
	{
		::System::UInt32 numInstallers; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* proxyHost; // 0x18
		::System::UInt16 proxyPort; // 0x20
		::System::Byte _padding1[0x6];
		::System::String* userAgent; // 0x28
		::System::UInt32 inactiveTimeoutSec; // 0x30
		::System::Boolean allowInsecureSSL; // 0x34
		::System::Boolean crcEnabled; // 0x35
		::CriWare::CriFsWebInstaller_ModulePlatformConfig platformConfig; // 0x36
	};
}
