#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MoleMole/UIRoarinStoreCollectRowWidgetController_CollectItemData.h"

class BJCLCAJNCKH;
class IFOKHAFFEKC;
class KLHJMDEAIOO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_AIAHCKAEAPN_OFFSET UNITYSDK_OFFSET(0x166C9C80)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_DAAJNNAJDDN_OFFSET UNITYSDK_OFFSET(0x166C9290)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_DJONFBHKLJC_OFFSET UNITYSDK_OFFSET(0x166C98F0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x166C8620)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_HCNMGLFFLEL_OFFSET UNITYSDK_OFFSET(0x166C87F0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_IHKMNJDEJGP_OFFSET UNITYSDK_OFFSET(0x166C91E0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_IJHMCMJKLLG_OFFSET UNITYSDK_OFFSET(0x166C9A30)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_MALFGOCBAGJ_OFFSET UNITYSDK_OFFSET(0x166C8C50)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x166C8BE0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_OMILKIMGCEM_OFFSET UNITYSDK_OFFSET(0x166C9120)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166C86E0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166C8780)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REGISTEREVENTWHENUIOPEN_OFFSET UNITYSDK_OFFSET(0x166C8630)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166C88C0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166C8A20)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166C8AC0)
#define MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_REGISTEREVENTWHENUIOPEN_OFFSET UNITYSDK_OFFSET(0x166C8B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreCollectPageController_TypeDefinitionIndex = 54584;

	class UIRoarinStoreCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NKCGNKCOPPK; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void RegisterEventWhenUIOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_REGISTEREVENTWHENUIOPEN_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventWhenUIOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER___BASE_REGISTEREVENTWHENUIOPEN_OFFSET))(this);
		}

		::System::Void HCNMGLFFLEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_HCNMGLFFLEL_OFFSET))(this);
		}

		::System::Int32 IHKMNJDEJGP(::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData FFKBEGIHIGG, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData CKADGLGJJAB)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData, ::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_IHKMNJDEJGP_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
		}

		::BJCLCAJNCKH* OGMPOGIHBIK()
		{
			return ((::BJCLCAJNCKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* DAAJNNAJDDN(::KLHJMDEAIOO* DBMADHPPJCB)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::KLHJMDEAIOO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_DAAJNNAJDDN_OFFSET))(this, DBMADHPPJCB);
		}

		::System::Collections::Generic::List_1<::System::Object*>* MALFGOCBAGJ()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_MALFGOCBAGJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* OMILKIMGCEM(::System::Collections::Generic::List_1<::System::Object*>* IAKMIHBCMNF)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_OMILKIMGCEM_OFFSET))(this, IAKMIHBCMNF);
		}

		::System::Void AIAHCKAEAPN(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_AIAHCKAEAPN_OFFSET))(this, KOIBHLHLMFC);
		}

		::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData IJHMCMJKLLG(::IFOKHAFFEKC* MHOIIOPHFFA)
		{
			return ((::MoleMole::UIRoarinStoreCollectRowWidgetController_CollectItemData(*)(::PVOID, ::IFOKHAFFEKC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_IJHMCMJKLLG_OFFSET))(this, MHOIIOPHFFA);
		}

		::System::Collections::Generic::List_1<::System::Object*>* DJONFBHKLJC(::System::Int32 DJMAJKFDBAH)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTORECOLLECTPAGECONTROLLER_DJONFBHKLJC_OFFSET))(this, DJMAJKFDBAH);
		}
	};
}
