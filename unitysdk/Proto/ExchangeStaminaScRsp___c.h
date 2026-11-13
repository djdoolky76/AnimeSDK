#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ExchangeStaminaScRsp; }
namespace System { class Object; }

#define PROTO_EXCHANGESTAMINASCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C27E0)
#define PROTO_EXCHANGESTAMINASCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C2820)
#define PROTO_EXCHANGESTAMINASCRSP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F4C2830)

namespace Proto
{
	inline static constexpr unsigned int ExchangeStaminaScRsp___c_TypeDefinitionIndex = 32956;

	class ExchangeStaminaScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4FAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::ExchangeStaminaScRsp* __cctor_b__43_0()
		{
			return ((::Proto::ExchangeStaminaScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_EXCHANGESTAMINASCRSP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
}
