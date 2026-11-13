#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class IDisposable; }

#define PGLLCPNEHDO_KBDJHFCPOCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54BBA0)
#define PGLLCPNEHDO_KBDJHFCPOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54BB90)
#define PGLLCPNEHDO_KBDJHFCPOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E54BB50)

inline static constexpr unsigned int PGLLCPNEHDO_KBDJHFCPOCK_TypeDefinitionIndex = 45250;

	class PGLLCPNEHDO_KBDJHFCPOCK : public ::System::Object
	{
	public:
		static ::System::IDisposable** StaticGet_FMJPMFEDIJL()
		{
			return (::System::IDisposable**)UnitySDK::FromName("", "KBDJHFCPOCK")->GetStaticField(0x61F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_KBDJHFCPOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGLLCPNEHDO_KBDJHFCPOCK_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO_KBDJHFCPOCK_DISPOSE_OFFSET))(this);
		}

	};
