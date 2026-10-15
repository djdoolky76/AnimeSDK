#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFCCCIMGMFL;
namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC8895B0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0___ONBLINDBOXGETDATASCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xC88CB50)

namespace RPG::Client::BlindBox::Pool
{
	class BlindBoxPoolModule___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* __4__this; // 0x10
		::MFCCCIMGMFL* protoPool; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnBlindBoxGetDataScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0___ONBLINDBOXGETDATASCRSP_B__0_OFFSET))(this);
		}

	};
}
