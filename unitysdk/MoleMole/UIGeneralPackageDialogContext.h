#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralPackageDialogContext_DialogType.h"

class MDLHOCBNDMD;
class NBDLJECLJJO;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x180B3B00)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x180B3B20)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_GOODSINFO_OFFSET UNITYSDK_OFFSET(0x180B3B10)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET UNITYSDK_OFFSET(0x180B3B30)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180B3B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPackageDialogContext_TypeDefinitionIndex = 58229;

	class UIGeneralPackageDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NBDLJECLJJO* _GoodsInfo_k__BackingField; // 0x28
		::System::Action_1<::MDLHOCBNDMD*>* _OnPurchase_k__BackingField; // 0x30
		::MoleMole::UIGeneralPackageDialogContext_DialogType ViewType; // 0x38

		::System::Void _ctor(::NBDLJECLJJO* info, ::System::Action_1<::MDLHOCBNDMD*>* onPurchase, ::MoleMole::UIGeneralPackageDialogContext_DialogType viewType)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*, ::System::Action_1<::MDLHOCBNDMD*>*, ::MoleMole::UIGeneralPackageDialogContext_DialogType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT__CTOR_OFFSET))(this, info, onPurchase, viewType);
		}

		::NBDLJECLJJO* get_GoodsInfo()
		{
			return ((::NBDLJECLJJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_GOODSINFO_OFFSET))(this);
		}

		::System::Void set_GoodsInfo(::NBDLJECLJJO* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_GOODSINFO_OFFSET))(this, value);
		}

		::System::Action_1<::MDLHOCBNDMD*>* get_OnPurchase()
		{
			return ((::System::Action_1<::MDLHOCBNDMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_GET_ONPURCHASE_OFFSET))(this);
		}

		::System::Void set_OnPurchase(::System::Action_1<::MDLHOCBNDMD*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MDLHOCBNDMD*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGCONTEXT_SET_ONPURCHASE_OFFSET))(this, value);
		}
	};
}
