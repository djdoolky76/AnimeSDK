#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBDBODNJACD;
class OMPLEKGNLBC;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfFarmCellData; }
namespace RPG::Client { class ElfFarmData; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE96950)
#define RPG_CLIENT_ELFFARMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE92A60)
#define RPG_CLIENT_ELFFARMINFO_GETALLNEWUNLOCKFIELDS_OFFSET UNITYSDK_OFFSET(0x1AE95BF0)
#define RPG_CLIENT_ELFFARMINFO_GETALLUNLOCKSEEDS_OFFSET UNITYSDK_OFFSET(0x1AE95E70)
#define RPG_CLIENT_ELFFARMINFO_GETCELLDATA_OFFSET UNITYSDK_OFFSET(0x1AE93BF0)
#define RPG_CLIENT_ELFFARMINFO_GETFARMDATA_OFFSET UNITYSDK_OFFSET(0x1AE906B0)
#define RPG_CLIENT_ELFFARMINFO_GETFARMERBELONGFARMDATA_OFFSET UNITYSDK_OFFSET(0x1AE95160)
#define RPG_CLIENT_ELFFARMINFO_GETFARMIDBYFIELDID_OFFSET UNITYSDK_OFFSET(0x1AE939E0)
#define RPG_CLIENT_ELFFARMINFO_GETFARMLIST_OFFSET UNITYSDK_OFFSET(0x1AE93D90)
#define RPG_CLIENT_ELFFARMINFO_GETFIELDDATA_OFFSET UNITYSDK_OFFSET(0x1AE934D0)
#define RPG_CLIENT_ELFFARMINFO_GETFIELDSUNLOCKBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE95950)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATABYITEMCONFIGID_OFFSET UNITYSDK_OFFSET(0x1AE93610)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATALIST_OFFSET UNITYSDK_OFFSET(0x1AE938B0)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x1AE91D50)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTSUNLOCKBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE95360)
#define RPG_CLIENT_ELFFARMINFO_GETSEEDDATA_OFFSET UNITYSDK_OFFSET(0x1AE91AB0)
#define RPG_CLIENT_ELFFARMINFO_GETSEEDLIST_OFFSET UNITYSDK_OFFSET(0x1AE93C60)
#define RPG_CLIENT_ELFFARMINFO_GET_CANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x1AE96830)
#define RPG_CLIENT_ELFFARMINFO_GET_FARMDICT_OFFSET UNITYSDK_OFFSET(0x1AE96890)
#define RPG_CLIENT_ELFFARMINFO_GET_FIELDDICT_OFFSET UNITYSDK_OFFSET(0x1AE96850)
#define RPG_CLIENT_ELFFARMINFO_GET_PRODUCTDICT_OFFSET UNITYSDK_OFFSET(0x1AE96910)
#define RPG_CLIENT_ELFFARMINFO_GET_SEEDDICT_OFFSET UNITYSDK_OFFSET(0x1AE968D0)
#define RPG_CLIENT_ELFFARMINFO_HARVESTFARM_OFFSET UNITYSDK_OFFSET(0x1AE94A90)
#define RPG_CLIENT_ELFFARMINFO_HARVEST_OFFSET UNITYSDK_OFFSET(0x1AE94780)
#define RPG_CLIENT_ELFFARMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AE91F60)
#define RPG_CLIENT_ELFFARMINFO_ISANYCELLEMPTY_OFFSET UNITYSDK_OFFSET(0x1AE961A0)
#define RPG_CLIENT_ELFFARMINFO_ISANYPRODUCTMATURED_OFFSET UNITYSDK_OFFSET(0x1AE964E0)
#define RPG_CLIENT_ELFFARMINFO_RECYCLEFIELDSEED_OFFSET UNITYSDK_OFFSET(0x1AE94510)
#define RPG_CLIENT_ELFFARMINFO_RECYCLESEED_OFFSET UNITYSDK_OFFSET(0x1AE94340)
#define RPG_CLIENT_ELFFARMINFO_SENDBATCHPLANTREQUEST_OFFSET UNITYSDK_OFFSET(0x1AE940A0)
#define RPG_CLIENT_ELFFARMINFO_SENDSINGLEPLANTREQUEST_OFFSET UNITYSDK_OFFSET(0x1AE93EC0)
#define RPG_CLIENT_ELFFARMINFO_SET_CANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x1AE96840)
#define RPG_CLIENT_ELFFARMINFO_SYNCCANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x1AE93580)
#define RPG_CLIENT_ELFFARMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1AE92C30)
#define RPG_CLIENT_ELFFARMINFO__INITFARMDATA_OFFSET UNITYSDK_OFFSET(0x1AE92220)
#define RPG_CLIENT_ELFFARMINFO__INITFIELDDATA_OFFSET UNITYSDK_OFFSET(0x1AE91FC0)
#define RPG_CLIENT_ELFFARMINFO__INITPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x1AE926E0)
#define RPG_CLIENT_ELFFARMINFO__INITSEEDDATA_OFFSET UNITYSDK_OFFSET(0x1AE92480)
#define RPG_CLIENT_ELFFARMINFO__SYNCFARMFIELDINFO_OFFSET UNITYSDK_OFFSET(0x1AE93090)
#define RPG_CLIENT_ELFFARMINFO__SYNCFARMMANAGERINFO_OFFSET UNITYSDK_OFFSET(0x1AE935D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmInfo_TypeDefinitionIndex = 65123;

	class ElfFarmInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>* _FieldDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>* _SeedDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>* _ProductDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>* _FarmDict; // 0x28
		::System::Boolean _CanTakeVillagerReward_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_INIT_OFFSET))(this);
		}

		::System::Void _InitFieldData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITFIELDDATA_OFFSET))(this);
		}

		::System::Void _InitFarmData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITFARMDATA_OFFSET))(this);
		}

		::System::Void _InitSeedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITSEEDDATA_OFFSET))(this);
		}

		::System::Void _InitProductData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITPRODUCTDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::OMPLEKGNLBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPLEKGNLBC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncCanTakeVillagerReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SYNCCANTAKEVILLAGERREWARD_OFFSET))(this, a1);
		}

		::System::Void _SyncFarmFieldInfo(::Google::Protobuf::Collections::RepeatedField_1<::OBDBODNJACD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::OBDBODNJACD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__SYNCFARMFIELDINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncFarmManagerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__SYNCFARMMANAGERINFO_OFFSET))(this);
		}

		::RPG::Client::ElfFarmSeedData* GetSeedData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmSeedData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETSEEDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmProductData* GetProductData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmProductData* GetProductDataByItemConfigID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATABYITEMCONFIGID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* GetProductDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATALIST_OFFSET))(this);
		}

		::RPG::Client::ElfFarmData* GetFarmData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmFieldData* GetFieldData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmFieldData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFIELDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetFarmIDByFieldID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMIDBYFIELDID_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmCellData* GetCellData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETCELLDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* GetSeedList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETSEEDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmData*>* GetFarmList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMLIST_OFFSET))(this);
		}

		::System::Void SendSinglePlantRequest(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SENDSINGLEPLANTREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendBatchPlantRequest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SENDBATCHPLANTREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleSeed(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_RECYCLESEED_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleFieldSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_RECYCLEFIELDSEED_OFFSET))(this, a1);
		}

		::System::Void Harvest(::RPG::Client::ElfFarmFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_HARVEST_OFFSET))(this, a1);
		}

		::System::Void HarvestFarm(::RPG::Client::ElfFarmFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_HARVESTFARM_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmData* GetFarmerBelongFarmData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMERBELONGFARMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* GetProductsUnlockByProgress(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTSUNLOCKBYPROGRESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* GetFieldsUnlockByProgress(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFIELDSUNLOCKBYPROGRESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* GetAllNewUnlockFields()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETALLNEWUNLOCKFIELDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* GetAllUnlockSeeds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETALLUNLOCKSEEDS_OFFSET))(this);
		}

		::System::Boolean IsAnyCellEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_ISANYCELLEMPTY_OFFSET))(this);
		}

		::System::Boolean IsAnyProductMatured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_ISANYPRODUCTMATURED_OFFSET))(this);
		}

		::System::Boolean get_CanTakeVillagerReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_CANTAKEVILLAGERREWARD_OFFSET))(this);
		}

		::System::Void set_CanTakeVillagerReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SET_CANTAKEVILLAGERREWARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>* get_FieldDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_FIELDDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>* get_FarmDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_FARMDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>* get_SeedDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_SEEDDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>* get_ProductDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_PRODUCTDICT_OFFSET))(this);
		}

	};
}
