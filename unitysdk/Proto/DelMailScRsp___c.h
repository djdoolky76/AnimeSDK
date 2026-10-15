#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class DelMailScRsp; }
namespace System { class Object; }

#define PROTO_DELMAILSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC120)
#define PROTO_DELMAILSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC160)
#define PROTO_DELMAILSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFEC170)

namespace Proto
{
	class DelMailScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::DelMailScRsp* __cctor_b__28_0()
		{
			return ((::Proto::DelMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
