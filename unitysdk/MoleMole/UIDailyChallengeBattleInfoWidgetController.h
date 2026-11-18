#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBattleInfoWidgetControllerBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET UNITYSDK_OFFSET(0x1705F200)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET UNITYSDK_OFFSET(0x1705F360)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETMACHINELEVELID_OFFSET UNITYSDK_OFFSET(0x1705F0C0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1705EC50)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_IFEMMBKHENO_OFFSET UNITYSDK_OFFSET(0x1705FA50)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1705F920)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETCURPROGRESS_0_0_OFFSET UNITYSDK_OFFSET(0x1705EEA0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETTOTALNUM_0_1_OFFSET UNITYSDK_OFFSET(0x1705EFA0)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETMACHINELEVELID_OFFSET UNITYSDK_OFFSET(0x1705F930)
#define MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1705F9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeBattleInfoWidgetController_TypeDefinitionIndex = 68405;

	class UIDailyChallengeBattleInfoWidgetController : public ::MoleMole::UIBattleInfoWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetMachineLevelId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_GETMACHINELEVELID_OFFSET))(this);
		}

		::System::Void FillCardList(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLCARDLIST_OFFSET))(this, cardList);
		}

		::System::Void FillRewardMap(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* rewards)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_FILLREWARDMAP_OFFSET))(this, rewards);
		}

		static ::System::Int32 _GetProgress_g__GetCurProgress_0_0()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETCURPROGRESS_0_0_OFFSET))();
		}

		static ::System::Int32 _GetProgress_g__GetTotalNum_0_1()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER__GETPROGRESS_G__GETTOTALNUM_0_1_OFFSET))();
		}

		::System::Int32 __base_GetMachineLevelId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETMACHINELEVELID_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> __base_GetProgress()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER___BASE_GETPROGRESS_OFFSET))(this);
		}

		::System::Void IFEMMBKHENO(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HEFKNPPFEFC, ::System::Int32 KCNOHOOPNAH, ::System::Int32 JHFKDGBCOBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEBATTLEINFOWIDGETCONTROLLER_IFEMMBKHENO_OFFSET))(this, HEFKNPPFEFC, KCNOHOOPNAH, JHFKDGBCOBA);
		}
	};
}
