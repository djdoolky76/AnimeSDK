#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElfFarmCellData_ElfCellUpdateReason.h"
#include "unitysdk/System/Object.h"
class CEKMLMOCLHF;
class OBDBODNJACD;
namespace RPG::Client { class ElfFarmCellData; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmGrowingCropsData; }

#define RPG_CLIENT_ELFFARMCELLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCD83C40)
#define RPG_CLIENT_ELFFARMCELLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCD83CA0)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_GROWINGDATA_OFFSET UNITYSDK_OFFSET(0xCD83F80)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCD83F40)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_ISGROWINGMODELNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xCD83FA0)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xCD83F60)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xCD83FE0)
#define RPG_CLIENT_ELFFARMCELLDATA_GET_UPDATEREASON_OFFSET UNITYSDK_OFFSET(0xCD83FC0)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_GROWINGDATA_OFFSET UNITYSDK_OFFSET(0xCD83F90)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xCD83F50)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_ISGROWINGMODELNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xCD83FB0)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xCD83F70)
#define RPG_CLIENT_ELFFARMCELLDATA_SET_UPDATEREASON_OFFSET UNITYSDK_OFFSET(0xCD83FD0)
#define RPG_CLIENT_ELFFARMCELLDATA_SYNCHARVEST_OFFSET UNITYSDK_OFFSET(0xCD83E90)
#define RPG_CLIENT_ELFFARMCELLDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xCD83CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmCellData_TypeDefinitionIndex = 63676;

	class ElfFarmCellData : public ::System::Object
	{
	public:
		::RPG::Client::ElfFarmGrowingCropsData* _GrowingData_k__BackingField; // 0x10
		::RPG::Client::ElfFarmFieldData* _Owner_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::RPG::Client::ElfFarmCellData_ElfCellUpdateReason _UpdateReason_k__BackingField; // 0x24
		::System::Boolean _IsGrowingModelNeedUpdate_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmCellData* Create(::RPG::Client::ElfFarmFieldData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::RPG::Client::ElfFarmFieldData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Sync(::OBDBODNJACD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBDBODNJACD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncHarvest(::CEKMLMOCLHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEKMLMOCLHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SYNCHARVEST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmFieldData* get_Owner()
		{
			return ((::RPG::Client::ElfFarmFieldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::ElfFarmFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmGrowingCropsData* get_GrowingData()
		{
			return ((::RPG::Client::ElfFarmGrowingCropsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_GROWINGDATA_OFFSET))(this);
		}

		::System::Void set_GrowingData(::RPG::Client::ElfFarmGrowingCropsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmGrowingCropsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_GROWINGDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGrowingModelNeedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_ISGROWINGMODELNEEDUPDATE_OFFSET))(this);
		}

		::System::Void set_IsGrowingModelNeedUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_ISGROWINGMODELNEEDUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmCellData_ElfCellUpdateReason get_UpdateReason()
		{
			return ((::RPG::Client::ElfFarmCellData_ElfCellUpdateReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_UPDATEREASON_OFFSET))(this);
		}

		::System::Void set_UpdateReason(::RPG::Client::ElfFarmCellData_ElfCellUpdateReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmCellData_ElfCellUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_SET_UPDATEREASON_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMCELLDATA_GET_SORTID_OFFSET))(this);
		}

	};
}
