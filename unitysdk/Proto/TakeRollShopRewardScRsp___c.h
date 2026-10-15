#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class TakeRollShopRewardScRsp; }
namespace System { class Object; }

#define PROTO_TAKEROLLSHOPREWARDSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEB520)
#define PROTO_TAKEROLLSHOPREWARDSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEB560)
#define PROTO_TAKEROLLSHOPREWARDSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFEB570)

namespace Proto
{
	inline static constexpr unsigned int TakeRollShopRewardScRsp___c_TypeDefinitionIndex = 33880;

	class TakeRollShopRewardScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4F070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::TakeRollShopRewardScRsp* __cctor_b__38_0()
		{
			return ((::Proto::TakeRollShopRewardScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEROLLSHOPREWARDSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
