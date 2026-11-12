#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightProtoPendingAction.h"
class CHCHAJIANIM;
class CJLEJIGIKOF;
class COGDEMPCLHA;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class LuaUIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDC422B0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDC42230)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xDC423C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDC427F0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDC42160)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xDC425A0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xDC42800)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xDC42550)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_1_OFFSET UNITYSDK_OFFSET(0xDC424B0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC42400)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xDC421E0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__ONFINISH_OFFSET UNITYSDK_OFFSET(0xDC42790)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__ONSTART_OFFSET UNITYSDK_OFFSET(0xDC42630)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__SYNCSELECTIONS_OFFSET UNITYSDK_OFFSET(0xDC422C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___SYNCSELECTIONS_B__14_0_OFFSET UNITYSDK_OFFSET(0xDC42810)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecommendEquipSelection_TypeDefinitionIndex = 66571;

	class GridFightRecommendEquipSelection : public ::RPG::Client::GridFightProtoPendingAction
	{
	public:
		::RPG::Client::LuaUIController* _HandleUI; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x28
		::System::UInt32 _ActionID_k__BackingField; // 0x30
		::System::Int32 PendingSelectID; // 0x34
		::System::Void _ctor(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::COGDEMPCLHA* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::COGDEMPCLHA*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GETACTIONID_OFFSET))(this);
		}

		::System::Void Update(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::COGDEMPCLHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGDEMPCLHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__ONSTART_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__ONFINISH_OFFSET))(this);
		}

		::System::Void _SyncSelections(::COGDEMPCLHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGDEMPCLHA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__SYNCSELECTIONS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SET_ACTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __SyncSelections_b__14_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___SYNCSELECTIONS_B__14_0_OFFSET))(this, a1);
		}

	};
}
