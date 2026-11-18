#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController.h"

class JCJGDLEAEML_AEDEFFHOAGB;
class KOIDMLPJGML;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x17DA4C90)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHACTCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0x17DA4800)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x17DA4100)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA4FB0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x17DA4FC0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHACTCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0x17DA4FD0)
#define MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x17DA4FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISmashBroInLevelPauseBattleWidgetController_TypeDefinitionIndex = 46041;

	class UISmashBroInLevelPauseBattleWidgetController : public ::MoleMole::UIInLevelPauseBattleInfoWidgetController
	{
	public:
		::JCJGDLEAEML_AEDEFFHOAGB* CCIOBIKGNCH; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHDETAIL_OFFSET))(this);
		}

		::System::Void RefreshACTChallengeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_REFRESHACTCHALLENGELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* GetShowRewardList(::System::Collections::Generic::List_1<::System::Int32>* dataList)
		{
			return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET))(this, dataList);
		}

		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* __base_GetShowRewardList(::System::Collections::Generic::List_1<::System::Int32>* P0)
		{
			return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_GETSHOWREWARDLIST_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshACTChallengeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHACTCHALLENGELIST_OFFSET))(this);
		}

		::System::Void __base_RefreshDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISMASHBROINLEVELPAUSEBATTLEWIDGETCONTROLLER___BASE_REFRESHDETAIL_OFFSET))(this);
		}
	};
}
