#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EKOMAFPIPMA_DKCFBCFGADG;

#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19F663F0)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x19F663D0)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_PARSEJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19F66450)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x19F663E0)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F66500)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19F66550)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseDialogContext_TypeDefinitionIndex = 40638;

	class UIAMERPurchaseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 _ItemID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		static ::System::Boolean ParseJumpParas(::EKOMAFPIPMA_DKCFBCFGADG* paras, ::System::Int32& itemID)
		{
			return ((::System::Boolean(*)(::EKOMAFPIPMA_DKCFBCFGADG*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_PARSEJUMPPARAS_OFFSET))(paras, itemID);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
