#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_BAOGBNCMCMC_OFFSET UNITYSDK_OFFSET(0x18CDCC60)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x18CDC6D0)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x18CDD280)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x18CDC680)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_JHLNEBAIHAK_OFFSET UNITYSDK_OFFSET(0x18CDDC80)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDDBE0)
#define MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x18CDDBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelBossBattleInfoWidgetController_TypeDefinitionIndex = 81881;

	class UIInLevelBossBattleInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* rewardMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewardMap);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> __base_GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET))(this);
		}

		::System::Void BAOGBNCMCMC(::System::Collections::Generic::List_1<::System::Int32>* OHOOIKANEEG, ::System::Int32 CPCEFIHCDKE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_BAOGBNCMCMC_OFFSET))(this, OHOOIKANEEG, CPCEFIHCDKE);
		}

		::System::Int32 JHLNEBAIHAK(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBOSSBATTLEINFOWIDGETCONTROLLER_JHLNEBAIHAK_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
		}
	};
}
