#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIBangbooDreamShopPageController; }

#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1983F8F0)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__ONCLICKBUY_B__0_OFFSET UNITYSDK_OFFSET(0x1983F900)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamShopPageController___c__DisplayClass40_0_TypeDefinitionIndex = 53792;

	class UIBangbooDreamShopPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooDreamShopPageController* __4__this; // 0x10
		::System::Int32 goodsID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBuy_b__0(::OAEFGCLEHHO* _)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__ONCLICKBUY_B__0_OFFSET))(this, _);
		}
	};
}
