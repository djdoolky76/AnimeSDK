#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACELAALNKNC;
namespace RPG::GameCore { class PropComponent; }

#define ACELAALNKNC___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB11A560)
#define ACELAALNKNC___C__DISPLAYCLASS5_0___ONGETROLLSHOPINFOSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xB11A700)

	class ACELAALNKNC___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::ACELAALNKNC* __4__this; // 0x10
		::RPG::GameCore::PropComponent* propCmpt; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACELAALNKNC___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnGetRollShopInfoScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACELAALNKNC___C__DISPLAYCLASS5_0___ONGETROLLSHOPINFOSCRSP_B__0_OFFSET))(this);
		}

	};
