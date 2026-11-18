#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectItemData.h"

#define BJCLCAJNCKH_MBMDHPNOLBP_FNMONEGOBHD_OFFSET UNITYSDK_OFFSET(0x14ECF6E0)
#define BJCLCAJNCKH_MBMDHPNOLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECF6D0)

inline static constexpr unsigned int BJCLCAJNCKH_MBMDHPNOLBP_TypeDefinitionIndex = 80239;

class BJCLCAJNCKH_MBMDHPNOLBP : public ::System::Object
{
public:
	::System::Int32 HBHFFHEHLBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCLCAJNCKH_MBMDHPNOLBP__CTOR_OFFSET))(this);
	}

	::System::Boolean FNMONEGOBHD(::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData))((::PBYTE)hIl2Cpp + BJCLCAJNCKH_MBMDHPNOLBP_FNMONEGOBHD_OFFSET))(this, IPMMCGDMODG);
	}
};
