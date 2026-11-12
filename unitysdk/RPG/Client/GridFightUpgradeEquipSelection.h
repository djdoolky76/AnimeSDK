#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class CJLEJIGIKOF;
class MHJIOJNNPDM;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class LuaUIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDCFB480)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDCFB400)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDCFB590)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDCFB910)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xDCFB6C0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDCFB920)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xDCFB360)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCFB5D0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xDCFB3B0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDCFB8B0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDCFB750)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__SYNCSELECTIONS_OFFSET UNITYSDK_OFFSET(0xDCFB490)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___SYNCSELECTIONS_B__10_0_OFFSET UNITYSDK_OFFSET(0xDCFB930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEquipSelection_TypeDefinitionIndex = 66572;

	class GridFightUpgradeEquipSelection : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x20
		::RPG::Client::LuaUIController* _HandleUI; // 0x28
		::System::UInt32 _ActionID_k__BackingField; // 0x30
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MHJIOJNNPDM* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MHJIOJNNPDM*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _SyncSelections(::MHJIOJNNPDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHJIOJNNPDM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__SYNCSELECTIONS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncSelections_b__10_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___SYNCSELECTIONS_B__10_0_OFFSET))(this, a1);
		}

	};
}
