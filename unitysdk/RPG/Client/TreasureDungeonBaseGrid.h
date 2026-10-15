#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"
class IHBMPCIIGJD;
class KMCCCOKIOFD;
namespace RPG::Client { class TreasureDungeonBaseGrid; }
namespace RPG::Client { class TreasureDungeonGridBuff; }
namespace RPG::GameCore { class TreasureDungeonGridConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CANSYNC_OFFSET UNITYSDK_OFFSET(0xE3218F0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CREATEBYSERVERGRIDDATA_OFFSET UNITYSDK_OFFSET(0xE320D10)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CTOR_OFFSET UNITYSDK_OFFSET(0xE320E60)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0xE321BF0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDBUFFS_OFFSET UNITYSDK_OFFSET(0xE321D00)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDINDEX_OFFSET UNITYSDK_OFFSET(0xE321B30)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDPARAM_OFFSET UNITYSDK_OFFSET(0xE321B50)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0xE321990)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_HASTUTORIAL_OFFSET UNITYSDK_OFFSET(0xE321DF0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE321C50)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xE321BD0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISFLIPPED_OFFSET UNITYSDK_OFFSET(0xE321B90)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE321BB0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE321AC0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_TUTORIALTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xE321D40)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_GRIDINDEX_OFFSET UNITYSDK_OFFSET(0xE321B40)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xE321BE0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISFLIPPED_OFFSET UNITYSDK_OFFSET(0xE321BA0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE321BC0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SYNC_OFFSET UNITYSDK_OFFSET(0xE320E70)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID__SYNCBUFF_OFFSET UNITYSDK_OFFSET(0xE320F30)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonBaseGrid_TypeDefinitionIndex = 68186;

	class TreasureDungeonBaseGrid : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>* _GridBuffs; // 0x10
		::RPG::GameCore::TreasureDungeonGridConfigRow* _Row; // 0x18
		::System::UInt32 _GridParam; // 0x20
		::System::UInt32 _GridIndex_k__BackingField; // 0x24
		::System::Boolean _IsEmpty_k__BackingField; // 0x28
		::System::Boolean _IsFlipped_k__BackingField; // 0x29
		::System::Boolean _CanInteract; // 0x2A
		::System::Boolean _IsLocked_k__BackingField; // 0x2B
		::System::UInt32 _GridConfigID; // 0x2C
		// static const ::System::Object _EMPTYGRIDCONFIGID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureDungeonBaseGrid* CreateByServerGridData(::IHBMPCIIGJD* a1)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::IHBMPCIIGJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CREATEBYSERVERGRIDDATA_OFFSET))(a1);
		}

		::System::Void Sync(::IHBMPCIIGJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHBMPCIIGJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean CanSync(::IHBMPCIIGJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHBMPCIIGJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CANSYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncBuff(::System::Collections::Generic::IList_1<::KMCCCOKIOFD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::KMCCCOKIOFD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID__SYNCBUFF_OFFSET))(this, a1);
		}

		::RPG::GameCore::TreasureDungeonGridConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TreasureDungeonGridConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonGridType get_GridType()
		{
			return ((::RPG::GameCore::TreasureDungeonGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GridIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDINDEX_OFFSET))(this);
		}

		::System::Void set_GridIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_GRIDINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_GridParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsFlipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISFLIPPED_OFFSET))(this);
		}

		::System::Void set_IsFlipped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISFLIPPED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISEMPTY_OFFSET))(this, a1);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_CANINTERACT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>* get_GridBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDBUFFS_OFFSET))(this);
		}

		::System::String* get_TutorialTriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_TUTORIALTRIGGERKEY_OFFSET))(this);
		}

		::System::Boolean get_HasTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_HASTUTORIAL_OFFSET))(this);
		}

	};
}
