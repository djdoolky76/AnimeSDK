#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class SerialDisposableCore_DisposedSentinel; }

#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4251F0)
#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4251D0)
#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4251E0)

namespace R3
{
	class SerialDisposableCore_DisposedSentinel : public ::System::Object
	{
	public:
		static ::R3::SerialDisposableCore_DisposedSentinel** StaticGet_Instance()
		{
			return (::R3::SerialDisposableCore_DisposedSentinel**)UnitySDK::FromName("R3", "DisposedSentinel")->GetStaticField(0xA70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET))(this);
		}

	};
}
