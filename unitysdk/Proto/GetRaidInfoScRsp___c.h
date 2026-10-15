#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GetRaidInfoScRsp; }
namespace System { class Object; }

#define PROTO_GETRAIDINFOSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8CA0)
#define PROTO_GETRAIDINFOSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF8CD0)
#define PROTO_GETRAIDINFOSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFF8CE0)

namespace Proto
{
	class GetRaidInfoScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* __cctor_b__38_0()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
