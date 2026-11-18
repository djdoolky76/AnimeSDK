#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGPEKBONDHI;
template <typename T> class DFDEIDBBGHG_1;

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199A16E0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET UNITYSDK_OFFSET(0x199A16F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass12_0_TypeDefinitionIndex = 58546;

	class UIGachaPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::PGPEKBONDHI* gacha; // 0x10
		::DFDEIDBBGHG_1<::System::UInt32>* optionalUpItemList; // 0x18
		::System::Int32 itemID; // 0x20
		::System::UInt32 optionalUpItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBangbooOptionalName_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET))(this);
		}
	};
}
