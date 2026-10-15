#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACCPCPCKOEB;
namespace RPG::GameCore { class PropComponent; }

#define RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS106_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE726700)
#define RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS106_0___ONDOGACHAINROLLSHOPSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xE732670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent___c__DisplayClass106_0_TypeDefinitionIndex = 57370;

	class PropComponent___c__DisplayClass106_0 : public ::System::Object
	{
	public:
		::ACCPCPCKOEB* rsp; // 0x10
		::RPG::GameCore::PropComponent* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS106_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnDoGachaInRollShopScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCOMPONENT___C__DISPLAYCLASS106_0___ONDOGACHAINROLLSHOPSCRSP_B__0_OFFSET))(this);
		}

	};
}
