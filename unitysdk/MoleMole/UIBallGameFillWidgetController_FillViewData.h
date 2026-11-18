#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNHPGJBLLPG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GIBMJLOJLKD;
class MPHPFDEODIG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_CHANGEVIEWTYPE_OFFSET UNITYSDK_OFFSET(0x1EEC9E80)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_GETCONTROLNODE_OFFSET UNITYSDK_OFFSET(0x1EEC9BF0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EEC9650)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_ISMONSTERALLKILLED_OFFSET UNITYSDK_OFFSET(0x1EEC9910)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_LOADROLE_OFFSET UNITYSDK_OFFSET(0x1EECA390)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_REFRESHSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1EECA0F0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_RESETMONSTERID_OFFSET UNITYSDK_OFFSET(0x1EEC97E0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETELITEBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1EECA330)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1EEC9970)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERID_OFFSET UNITYSDK_OFFSET(0x1EEC9700)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERKILLED_OFFSET UNITYSDK_OFFSET(0x1EEC99D0)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EEC9660)
#define MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC9AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameFillWidgetController_FillViewData_TypeDefinitionIndex = 95042;

	class UIBallGameFillWidgetController_FillViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* MonsterID; // 0x10
		::KNLFLMMHALL_1<::System::Object*>* RoleView; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* CheckKilledMonsterID; // 0x20
		::KNLFLMMHALL_1<::System::Object*>* BossView; // 0x28
		::MPHPFDEODIG* ControlNode; // 0x30
		::System::Collections::Generic::Dictionary_2<::HNHPGJBLLPG, ::MPHPFDEODIG*>* NodeMap; // 0x38
		::KNLFLMMHALL_1<::System::Object*>* EliteView; // 0x40
		::GIBMJLOJLKD* View; // 0x48
		::System::Boolean isEliteBattle; // 0x50
		::System::Boolean isFinish; // 0x51
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 _pos; // 0x54
		::HNHPGJBLLPG Type; // 0x5C
		::System::Int32 WaveIndex; // 0x60

		::System::Void _ctor(::KNLFLMMHALL_1<::System::Object*>* boss, ::KNLFLMMHALL_1<::System::Object*>* elite, ::KNLFLMMHALL_1<::System::Object*>* role)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*, ::KNLFLMMHALL_1<::System::Object*>*, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA__CTOR_OFFSET))(this, boss, elite, role);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void SetMonsterID(::System::Collections::Generic::List_1<::System::Int32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERID_OFFSET))(this, ids);
		}

		::System::Void ResetMonsterID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_RESETMONSTERID_OFFSET))(this);
		}

		::System::Boolean IsMonsterAllKilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_ISMONSTERALLKILLED_OFFSET))(this);
		}

		::System::Void SetMonsterKilled(::System::Int32 monsterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETMONSTERKILLED_OFFSET))(this, monsterID);
		}

		::MPHPFDEODIG* GetControlNode(::HNHPGJBLLPG type)
		{
			return ((::MPHPFDEODIG*(*)(::PVOID, ::HNHPGJBLLPG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_GETCONTROLNODE_OFFSET))(this, type);
		}

		::System::Void ChangeViewType(::HNHPGJBLLPG type)
		{
			return ((::System::Void(*)(::PVOID, ::HNHPGJBLLPG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_CHANGEVIEWTYPE_OFFSET))(this, type);
		}

		::System::Void RefreshShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_REFRESHSHOWSTATE_OFFSET))(this);
		}

		::System::Void SetFinish(::System::Boolean finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETFINISH_OFFSET))(this, finish);
		}

		::System::Void SetEliteBattleState(::System::Boolean showBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_SETELITEBATTLESTATE_OFFSET))(this, showBattle);
		}

		::System::Void LoadRole(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEFILLWIDGETCONTROLLER_FILLVIEWDATA_LOADROLE_OFFSET))(this, path);
		}
	};
}
