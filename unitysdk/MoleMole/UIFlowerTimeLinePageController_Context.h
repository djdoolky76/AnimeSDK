#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ANHBPHMAICA;
class HBHHBMGKLPN;
namespace MoleMole { class UIFortuneFlowerShop3DModelController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSHOP3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x173BA1A0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSTATES_OFFSET UNITYSDK_OFFSET(0x173BA1C0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERTIMLINEINFORMDATA_OFFSET UNITYSDK_OFFSET(0x173BA1E0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_HIDETAG_OFFSET UNITYSDK_OFFSET(0x173BA220)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x173BA200)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSHOP3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x173BA1B0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSTATES_OFFSET UNITYSDK_OFFSET(0x173BA1D0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERTIMLINEINFORMDATA_OFFSET UNITYSDK_OFFSET(0x173BA1F0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_HIDETAG_OFFSET UNITYSDK_OFFSET(0x173BA230)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x173BA210)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173BA240)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePageController_Context_TypeDefinitionIndex = 72801;

	class UIFlowerTimeLinePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HBHHBMGKLPN* _FlowerTimlineInformData_k__BackingField; // 0x28
		::MoleMole::UIFortuneFlowerShop3DModelController* _FlowerShop3DModelController_k__BackingField; // 0x30
		::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>* _FlowerStates_k__BackingField; // 0x38
		::System::Boolean _HideTag_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 _PartnerID_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIFortuneFlowerShop3DModelController* get_FlowerShop3DModelController()
		{
			return ((::MoleMole::UIFortuneFlowerShop3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSHOP3DMODELCONTROLLER_OFFSET))(this);
		}

		::System::Void set_FlowerShop3DModelController(::MoleMole::UIFortuneFlowerShop3DModelController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFortuneFlowerShop3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSHOP3DMODELCONTROLLER_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>* get_FlowerStates()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERSTATES_OFFSET))(this);
		}

		::System::Void set_FlowerStates(::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::ANHBPHMAICA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERSTATES_OFFSET))(this, value);
		}

		::HBHHBMGKLPN* get_FlowerTimlineInformData()
		{
			return ((::HBHHBMGKLPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_FLOWERTIMLINEINFORMDATA_OFFSET))(this);
		}

		::System::Void set_FlowerTimlineInformData(::HBHHBMGKLPN* value)
		{
			return ((::System::Void(*)(::PVOID, ::HBHHBMGKLPN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_FLOWERTIMLINEINFORMDATA_OFFSET))(this, value);
		}

		::System::Int32 get_PartnerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_PARTNERID_OFFSET))(this);
		}

		::System::Void set_PartnerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_PARTNERID_OFFSET))(this, value);
		}

		::System::Boolean get_HideTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_GET_HIDETAG_OFFSET))(this);
		}

		::System::Void set_HideTag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER_CONTEXT_SET_HIDETAG_OFFSET))(this, value);
		}
	};
}
