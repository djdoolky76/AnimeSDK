#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class SerialDisposableCore_DisposedSentinel; }

#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB9E0)
#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB9C0)
#define R3_SERIALDISPOSABLECORE_DISPOSEDSENTINEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D5AB9D0)

namespace R3
{
	inline static constexpr unsigned int SerialDisposableCore_DisposedSentinel_TypeDefinitionIndex = 36896;

	class SerialDisposableCore_DisposedSentinel : public ::System::Object
	{
	public:
		static ::R3::SerialDisposableCore_DisposedSentinel** StaticGet_Instance()
		{
			return (::R3::SerialDisposableCore_DisposedSentinel**)UnitySDK::FromName("R3", "DisposedSentinel")->GetStaticField(0xA20);
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
