#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFCCCIMGMFL;
namespace RPG::Client::BlindBox::Pool { class BlindBoxPoolModule; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C550530)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__DISPLAYCLASS5_0___ONBLINDBOXGETDATASCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x1C553B00)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule___c__DisplayClass5_0_TypeDefinitionIndex = 77241;

	class BlindBoxPoolModule___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MFCCCIMGMFL* protoPool; // 0x10
		::RPG::Client::BlindBox::Pool::BlindBoxPoolModule* __4__this; // 0x18
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
