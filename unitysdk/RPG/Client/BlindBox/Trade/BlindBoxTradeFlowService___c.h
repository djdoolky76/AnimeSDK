#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACPIBIJPPH;
class IAKKHBENIOL;
class OAOONIMHKLA;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8983B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8983F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPRIVATEORDERANDCHECK_B__10_0_OFFSET UNITYSDK_OFFSET(0xC898420)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPUBLICORDERANDCHECK_B__9_0_OFFSET UNITYSDK_OFFSET(0xC898410)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__PUBLISHPUBLICORDER_B__4_0_OFFSET UNITYSDK_OFFSET(0xC898400)

namespace RPG::Client::BlindBox::Trade
{
	class BlindBoxTradeFlowService___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IAKKHBENIOL*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::IAKKHBENIOL*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.BlindBox.Trade", "<>c")->GetStaticField(0x5E370);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.BlindBox.Trade", "<>c")->GetStaticField(0x5E378);
		}

		static ::System::Func_2<::BACPIBIJPPH*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::BACPIBIJPPH*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.BlindBox.Trade", "<>c")->GetStaticField(0x5E380);
		}

		static ::System::Func_2<::OAOONIMHKLA*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::OAOONIMHKLA*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.BlindBox.Trade", "<>c")->GetStaticField(0x5E388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _PublishPublicOrder_b__4_0(::OAOONIMHKLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OAOONIMHKLA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__PUBLISHPUBLICORDER_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _CancelPublicOrderAndCheck_b__9_0(::IAKKHBENIOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAKKHBENIOL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPUBLICORDERANDCHECK_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _CancelPrivateOrderAndCheck_b__10_0(::BACPIBIJPPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BACPIBIJPPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEFLOWSERVICE___C__CANCELPRIVATEORDERANDCHECK_B__10_0_OFFSET))(this, a1);
		}

	};
}
