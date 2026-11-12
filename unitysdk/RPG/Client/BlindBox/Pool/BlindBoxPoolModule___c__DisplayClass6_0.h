#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOIDFLIHMB;
namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1EF420)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS6_0___ONBLINDBOXOPENBOXSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xD1F2270)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS6_0___ONBLINDBOXOPENBOXSCRSP_B__1_OFFSET UNITYSDK_OFFSET(0xD1F2970)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule___c__DisplayClass6_0_TypeDefinitionIndex = 77243;

	class BlindBoxPoolModule___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* __4__this; // 0x10
		::ABOIDFLIHMB* rsp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnBlindBoxOpenBoxScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS6_0___ONBLINDBOXOPENBOXSCRSP_B__0_OFFSET))(this);
		}

		::System::Void __OnBlindBoxOpenBoxScRsp_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS6_0___ONBLINDBOXOPENBOXSCRSP_B__1_OFFSET))(this);
		}

	};
}
