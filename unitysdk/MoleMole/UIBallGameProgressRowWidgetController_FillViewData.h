#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNEADNBEPBN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BKMOIBFLAEP_GKBDHPFNDLL;
class MPHPFDEODIG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_CHANGEVIEWTYPE_OFFSET UNITYSDK_OFFSET(0x188EB9B0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_GETCONTROLNODE_OFFSET UNITYSDK_OFFSET(0x188EB740)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x188EB1C0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_ISMONSTERALLKILLED_OFFSET UNITYSDK_OFFSET(0x188EB480)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x188EBBB0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_RESETMONSTERID_OFFSET UNITYSDK_OFFSET(0x188EB350)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETFINISH_OFFSET UNITYSDK_OFFSET(0x188EB4E0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERID_OFFSET UNITYSDK_OFFSET(0x188EB270)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERKILLED_OFFSET UNITYSDK_OFFSET(0x188EB530)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETSHOWBATTLE_OFFSET UNITYSDK_OFFSET(0x188EBCD0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x188EB1D0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x188EB620)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameProgressRowWidgetController_FillViewData_TypeDefinitionIndex = 65157;

	class UIBallGameProgressRowWidgetController_FillViewData : public ::System::Object
	{
	public:
		::MPHPFDEODIG* ControlNode; // 0x10
		::UnityEngine::Transform* root; // 0x18
		::BKMOIBFLAEP_GKBDHPFNDLL* View; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* MonsterID; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* CheckKilledMonsterID; // 0x30
		::System::Collections::Generic::Dictionary_2<::JNEADNBEPBN, ::MPHPFDEODIG*>* NodeMap; // 0x38
		::KNLFLMMHALL_1<::System::Object*>* EliteView; // 0x40
		::KNLFLMMHALL_1<::System::Object*>* BossView; // 0x48
		::JNEADNBEPBN Type; // 0x50
		::UnityEngine::Vector2 _pos; // 0x54
		::System::Int32 WaveIndex; // 0x5C
		::System::Boolean isShowBattle; // 0x60
		::System::Boolean isFinish; // 0x61

		::System::Void _ctor(::KNLFLMMHALL_1<::System::Object*>* boss, ::KNLFLMMHALL_1<::System::Object*>* elite, ::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*, ::KNLFLMMHALL_1<::System::Object*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA__CTOR_OFFSET))(this, boss, elite, root);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void SetMonsterID(::System::Collections::Generic::List_1<::System::Int32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERID_OFFSET))(this, ids);
		}

		::System::Void ResetMonsterID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_RESETMONSTERID_OFFSET))(this);
		}

		::System::Boolean IsMonsterAllKilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_ISMONSTERALLKILLED_OFFSET))(this);
		}

		::System::Void SetMonsterKilled(::System::Int32 monsterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERKILLED_OFFSET))(this, monsterID);
		}

		::MPHPFDEODIG* GetControlNode(::JNEADNBEPBN type)
		{
			return ((::MPHPFDEODIG*(*)(::PVOID, ::JNEADNBEPBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_GETCONTROLNODE_OFFSET))(this, type);
		}

		::System::Void ChangeViewType(::JNEADNBEPBN type)
		{
			return ((::System::Void(*)(::PVOID, ::JNEADNBEPBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_CHANGEVIEWTYPE_OFFSET))(this, type);
		}

		::System::Void SetFinish(::System::Boolean finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETFINISH_OFFSET))(this, finish);
		}

		::System::Void SetShowBattle(::System::Boolean showbattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_SETSHOWBATTLE_OFFSET))(this, showbattle);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_FILLVIEWDATA_REFRESHSTATE_OFFSET))(this);
		}
	};
}
