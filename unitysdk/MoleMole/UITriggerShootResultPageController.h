#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

class LDPMLCMMKHO;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralExpProgressWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class KLHEBGGNMGA_2;

#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_CBIIBLAMKED_1_OFFSET UNITYSDK_OFFSET(0x13BCBBE0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_CBIIBLAMKED_OFFSET UNITYSDK_OFFSET(0x13BCB600)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_CCHJGJKCFMD_OFFSET UNITYSDK_OFFSET(0x13BCA410)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_EEEOFKKIBNG_OFFSET UNITYSDK_OFFSET(0x13BCB7F0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x13BCA010)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x13BCA1B0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_MLCGELDGODK_OFFSET UNITYSDK_OFFSET(0x13BCB250)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_NANOMNKNBGG_OFFSET UNITYSDK_OFFSET(0x13BCA090)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13BC9760)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_PMLIMMAOHNL_OFFSET UNITYSDK_OFFSET(0x13BC9940)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x13BCA520)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCB160)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x13BCB170)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x13BCB1A0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13BCB230)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x13BCB240)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootResultPageController_TypeDefinitionIndex = 75569;

	class UITriggerShootResultPageController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController* ICFKLGALPAG; // 0x3A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::Int32 MLCGELDGODK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_MLCGELDGODK_OFFSET))(this);
		}

		::System::Void CBIIBLAMKED(::KLHEBGGNMGA_2<::System::Object*, ::System::Object*>* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::KLHEBGGNMGA_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_CBIIBLAMKED_OFFSET))(this, KOIBHLHLMFC);
		}

		static ::LDPMLCMMKHO* NANOMNKNBGG()
		{
			return ((::LDPMLCMMKHO*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_NANOMNKNBGG_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EEEOFKKIBNG()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_EEEOFKKIBNG_OFFSET))();
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData CCHJGJKCFMD(::System::String* MCOHLHMKLIP, ::System::String* EGEGIMGMJHN)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_CCHJGJKCFMD_OFFSET))(MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Void PMLIMMAOHNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_PMLIMMAOHNL_OFFSET))(this);
		}

		::System::Void CBIIBLAMKED_1(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_CBIIBLAMKED_1_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
