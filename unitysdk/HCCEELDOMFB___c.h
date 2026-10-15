#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define HCCEELDOMFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDADAF0)
#define HCCEELDOMFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDADB30)
#define HCCEELDOMFB___C__PINGBYUDPSYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DDADB40)
#define HCCEELDOMFB___C__PINGBYUDPSYNC_B__2_1_OFFSET UNITYSDK_OFFSET(0x1DDADB50)

	class HCCEELDOMFB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Net::IPEndPoint*, ::System::Net::Sockets::Socket*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Net::IPEndPoint*, ::System::Net::Sockets::Socket*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF28);
		}

		static ::System::Func_2<::System::Net::IPEndPoint*, ::System::UInt64>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Net::IPEndPoint*, ::System::UInt64>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCCEELDOMFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCEELDOMFB___C_CTOR_OFFSET))(this);
		}

		::System::UInt64 _PingByUdpSync_b__2_0(::System::Net::IPEndPoint* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + HCCEELDOMFB___C__PINGBYUDPSYNC_B__2_0_OFFSET))(this, a1);
		}

		::System::Net::Sockets::Socket* _PingByUdpSync_b__2_1(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + HCCEELDOMFB___C__PINGBYUDPSYNC_B__2_1_OFFSET))(this, a1);
		}

	};
