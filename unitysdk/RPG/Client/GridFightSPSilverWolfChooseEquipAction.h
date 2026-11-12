#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class CJLEJIGIKOF;
class ELBEHADNLBB;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class LuaUIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDC65110)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDC652F0)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDC65750)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0xDC65770)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0xDC650F0)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xDC65530)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDC65760)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0xDC65780)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0xDC65100)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xDC654E0)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC65170)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDC656F0)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDC655F0)
#define RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION__SYNCSELECTIONS_OFFSET UNITYSDK_OFFSET(0xDC65330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSPSilverWolfChooseEquipAction_TypeDefinitionIndex = 66717;

	class GridFightSPSilverWolfChooseEquipAction : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Selections_k__BackingField; // 0x20
		::RPG::Client::LuaUIController* _HandleUI; // 0x28
		::System::UInt32 _ActionID_k__BackingField; // 0x30
		::System::Boolean _IsReplace_k__BackingField; // 0x34
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Selections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GET_SELECTIONS_OFFSET))(this);
		}

		::System::Void set_Selections(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SET_SELECTIONS_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _SyncSelections(::ELBEHADNLBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELBEHADNLBB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION__SYNCSELECTIONS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_GET_ISREPLACE_OFFSET))(this);
		}

		::System::Void set_IsReplace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSILVERWOLFCHOOSEEQUIPACTION_SET_ISREPLACE_OFFSET))(this, a1);
		}

	};
}
