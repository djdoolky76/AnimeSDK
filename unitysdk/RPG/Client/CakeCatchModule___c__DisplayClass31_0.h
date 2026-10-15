#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCJIPKABEF;
namespace RPG::Client { class CakeCatchModule; }

#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC8E8AD0)
#define RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS31_0___ONTRAINCAKECATCHSEARCHSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xC8ECB70)

namespace RPG::Client
{
	class CakeCatchModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeCatchModule* __4__this; // 0x10
		::GFCJIPKABEF* rsp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnTrainCakeCatchSearchScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__DISPLAYCLASS31_0___ONTRAINCAKECATCHSEARCHSCRSP_B__0_OFFSET))(this);
		}

	};
}
