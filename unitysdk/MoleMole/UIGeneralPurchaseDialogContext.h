#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPurchaseDialogContext_CurrencyType.h"
#include "unitysdk/MoleMole/UIGeneralPurchaseDialogContext_DialogType.h"

class MDLHOCBNDMD;
class NBDLJECLJJO;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_CUSTOMDETAILACTION_OFFSET UNITYSDK_OFFSET(0x17847B10)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x17847B30)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x17847AF0)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_CUSTOMDETAILACTION_OFFSET UNITYSDK_OFFSET(0x17847B20)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x17847B40)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x17847B00)
#define MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17847B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchaseDialogContext_TypeDefinitionIndex = 75737;

	class UIGeneralPurchaseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MDLHOCBNDMD*>* _OnPurchase_k__BackingField; // 0x28
		::NBDLJECLJJO* _GoodsInfo_k__BackingField; // 0x30
		::System::Action_1<::System::Int32>* _CustomDetailAction_k__BackingField; // 0x38
		::MoleMole::UIGeneralPurchaseDialogContext_DialogType ViewType; // 0x40
		::System::Boolean hideDesc2; // 0x44
		::System::Byte _padding0[0x3];
		::MoleMole::UIGeneralPurchaseDialogContext_CurrencyType type; // 0x48

		::System::Void _ctor(::NBDLJECLJJO* info, ::System::Action_1<::MDLHOCBNDMD*>* onPurchase, ::MoleMole::UIGeneralPurchaseDialogContext_DialogType type)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*, ::System::Action_1<::MDLHOCBNDMD*>*, ::MoleMole::UIGeneralPurchaseDialogContext_DialogType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT__CTOR_OFFSET))(this, info, onPurchase, type);
		}

		::System::Action_1<::MDLHOCBNDMD*>* get_OnPurchase()
		{
			return ((::System::Action_1<::MDLHOCBNDMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET))(this);
		}

		::System::Void set_OnPurchase(::System::Action_1<::MDLHOCBNDMD*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MDLHOCBNDMD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET))(this, value);
		}

		::System::Action_1<::System::Int32>* get_CustomDetailAction()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_CUSTOMDETAILACTION_OFFSET))(this);
		}

		::System::Void set_CustomDetailAction(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_CUSTOMDETAILACTION_OFFSET))(this, value);
		}

		::NBDLJECLJJO* get_GoodsInfo()
		{
			return ((::NBDLJECLJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_GET_GOODSINFO_OFFSET))(this);
		}

		::System::Void set_GoodsInfo(::NBDLJECLJJO* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEDIALOGCONTEXT_SET_GOODSINFO_OFFSET))(this, value);
		}
	};
}
