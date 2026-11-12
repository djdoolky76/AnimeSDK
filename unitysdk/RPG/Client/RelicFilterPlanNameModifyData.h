#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEHJKNPFDMA;
namespace RPG::Client { class RelicFilterPlanNameModifyData; }
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE8DC570)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8DC560)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE8DC520)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xE8DC500)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE8DC540)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xE8DC530)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xE8DC510)
#define RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE8DC550)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanNameModifyData_TypeDefinitionIndex = 68835;

	class RelicFilterPlanNameModifyData : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::UInt32 _SlotIndex_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 _UpdateTimestamp_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Void set_SlotIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_SLOTINDEX_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int64 get_UpdateTimestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_GET_UPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UpdateTimestamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_SET_UPDATETIMESTAMP_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicFilterPlanNameModifyData* Create(::DEHJKNPFDMA* a1)
		{
			return ((::RPG::Client::RelicFilterPlanNameModifyData*(*)(::DEHJKNPFDMA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANNAMEMODIFYDATA_CREATE_OFFSET))(a1);
		}

	};
}
