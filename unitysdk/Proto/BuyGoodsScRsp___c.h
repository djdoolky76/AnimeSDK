#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class BuyGoodsScRsp; }
namespace System { class Object; }

#define PROTO_BUYGOODSSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBBD10)
#define PROTO_BUYGOODSSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBBD50)
#define PROTO_BUYGOODSSCRSP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DFBBD60)

namespace Proto
{
	inline static constexpr unsigned int BuyGoodsScRsp___c_TypeDefinitionIndex = 34182;

	class BuyGoodsScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x48FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::BuyGoodsScRsp* __cctor_b__43_0()
		{
			return ((::Proto::BuyGoodsScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_BUYGOODSSCRSP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
}
