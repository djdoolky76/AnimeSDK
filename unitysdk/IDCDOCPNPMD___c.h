#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDCDOCPNPMD;
namespace System { class Object; }

#define IDCDOCPNPMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E628AC0)
#define IDCDOCPNPMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E628B00)
#define IDCDOCPNPMD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E628B10)

	class IDCDOCPNPMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDCDOCPNPMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD___C_CTOR_OFFSET))(this);
		}

		::IDCDOCPNPMD* __cctor_b__18_0()
		{
			return ((::IDCDOCPNPMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
