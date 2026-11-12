#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFBBBKADPDI;
class HGCIAPKELAF;
class MOOKMKEKMKC;
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSDICEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEA0A760)
#define RPG_CLIENT_ROGUENOUSDICEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA08AD0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHBYID_OFFSET UNITYSDK_OFFSET(0xEA09D00)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHESBYGENRE_OFFSET UNITYSDK_OFFSET(0xEA09B50)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHLIST_OFFSET UNITYSDK_OFFSET(0xEA0A310)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETCANEQUIPPEDSURFACESBYBRANCH_OFFSET UNITYSDK_OFFSET(0xEA09FB0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETROGUENOUSDICEBRANCHTAGS_OFFSET UNITYSDK_OFFSET(0xEA09930)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATABYITEMID_OFFSET UNITYSDK_OFFSET(0xEA09F20)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATAITEM_OFFSET UNITYSDK_OFFSET(0xEA09DC0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACELIST_OFFSET UNITYSDK_OFFSET(0xEA0A4D0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_BRANCHDICT_OFFSET UNITYSDK_OFFSET(0xEA0A490)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_ITEMIDTOSURFACEDICT_OFFSET UNITYSDK_OFFSET(0xEA0A740)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_SURFACEDICT_OFFSET UNITYSDK_OFFSET(0xEA0A650)
#define RPG_CLIENT_ROGUENOUSDICEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xEA08620)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SET_ITEMIDTOSURFACEDICT_OFFSET UNITYSDK_OFFSET(0xEA0A750)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSINGLEBRANCH_OFFSET UNITYSDK_OFFSET(0xEA09880)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSURFACEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xEA09E50)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xEA08F50)
#define RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSBRANCHES_OFFSET UNITYSDK_OFFSET(0xEA088B0)
#define RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSDICESURFACES_OFFSET UNITYSDK_OFFSET(0xEA08670)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousDiceData_TypeDefinitionIndex = 68896;

	class RogueNousDiceData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* _ItemIDToSurfaceDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* _SurfaceList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>* _BranchDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* _SurfaceDict; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* _BranchList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::MOOKMKEKMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKMKEKMKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncSingleBranch(::HGCIAPKELAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIAPKELAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSINGLEBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousDiceBranchTagRow*>* GetRogueNousDiceBranchTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousDiceBranchTagRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETROGUENOUSDICEBRANCHTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* GetBranchesByGenre(::RPG::GameCore::RogueNousDiceBranchTagRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueNousDiceBranchTagRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHESBYGENRE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceBranchDataItem* GetBranchByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceBranchDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHBYID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATAITEM_OFFSET))(this, a1);
		}

		::System::Void SyncSurfaceUnlocked(::DFBBBKADPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFBBBKADPDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSURFACEUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATABYITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* GetCanEquippedSurfacesByBranch(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETCANEQUIPPEDSURFACESBYBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* GetBranchList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* GetSurfaceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACELIST_OFFSET))(this);
		}

		::System::Void _InitRogueNousDiceSurfaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSDICESURFACES_OFFSET))(this);
		}

		::System::Void _InitRogueNousBranches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSBRANCHES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>* get_BranchDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_BRANCHDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* get_SurfaceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_SURFACEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* get_ItemIDToSurfaceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_ITEMIDTOSURFACEDICT_OFFSET))(this);
		}

		::System::Void set_ItemIDToSurfaceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SET_ITEMIDTOSURFACEDICT_OFFSET))(this, a1);
		}

	};
}
