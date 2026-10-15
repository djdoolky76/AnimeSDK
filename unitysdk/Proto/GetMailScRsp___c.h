#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GetMailScRsp; }
namespace System { class Object; }

#define PROTO_GETMAILSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6980)
#define PROTO_GETMAILSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF69B0)
#define PROTO_GETMAILSCRSP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFF69C0)

namespace Proto
{
	class GetMailScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::GetMailScRsp* __cctor_b__48_0()
		{
			return ((::Proto::GetMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
}
