#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADODOFNNPEO;

#define RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS58_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBECCF0)
#define RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS58_0___ONCMDPLAYERLOGINSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xDBF1A00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerModule___c__DisplayClass58_0_TypeDefinitionIndex = 66690;

	class PlayerModule___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::ADODOFNNPEO* rsp; // 0x10
		::System::Boolean handled; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS58_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnCmdPlayerLoginScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS58_0___ONCMDPLAYERLOGINSCRSP_B__0_OFFSET))(this);
		}

	};
}
