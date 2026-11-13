#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EOKANEBANBL;
class HDCJJFDLHIO;
namespace RPG::Client { class GridFightElationLaughPointSlot; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A610)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETNEXTEMPTYUNLOCKSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1D159DA0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETRECOMMENDS_OFFSET UNITYSDK_OFFSET(0x1D159E60)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETSLOTEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x1D159600)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETSLOT_OFFSET UNITYSDK_OFFSET(0x1D159570)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETUNLOCKNEEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D159330)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D15A5F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_HASCRAFTABLE_OFFSET UNITYSDK_OFFSET(0x1D159B50)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISCRAFTABLE_OFFSET UNITYSDK_OFFSET(0x1D159980)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISEQUIPAVAILABLEFORCRAFT_OFFSET UNITYSDK_OFFSET(0x1D159BC0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISSLOTREADYFORDRESS_OFFSET UNITYSDK_OFFSET(0x1D159C80)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1D1592A0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_SETUPTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1D158E80)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_SET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D15A600)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D158ED0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT__ADDRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1D15A4B0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT__INITRECDATA_OFFSET UNITYSDK_OFFSET(0x1D15A2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointEquipComponent_TypeDefinitionIndex = 67183;

	class GridFightElationLaughPointEquipComponent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightElationLaughPointSlot*>* _SlotList; // 0x10
		::RPG::Client::GridFightTraitElationLaughPointEffect* _Effect; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _BasicEquipIDToRecom; // 0x20
		::System::Int32 _SlotCount_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void SetupTraitEffect(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_SETUPTRAITEFFECT_OFFSET))(this, a1);
		}

		::System::Void Update(::HDCJJFDLHIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDCJJFDLHIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 GetUnlockNeedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETUNLOCKNEEDLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightElationLaughPointSlot* GetSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightElationLaughPointSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetSlotEquipItemData(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETSLOTEQUIPITEMDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsCraftable(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISCRAFTABLE_OFFSET))(this, a1);
		}

		::System::Boolean HasCraftable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_HASCRAFTABLE_OFFSET))(this);
		}

		::System::Boolean IsEquipAvailableForCraft(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISEQUIPAVAILABLEFORCRAFT_OFFSET))(this, a1);
		}

		::System::Boolean IsSlotReadyForDress(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_ISSLOTREADYFORDRESS_OFFSET))(this, a1);
		}

		::System::Int32 GetNextEmptyUnlockSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETNEXTEMPTYUNLOCKSLOTINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EOKANEBANBL*>* GetRecommends()
		{
			return ((::System::Collections::Generic::List_1<::EOKANEBANBL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GETRECOMMENDS_OFFSET))(this);
		}

		::System::Int32 get_SlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_GET_SLOTCOUNT_OFFSET))(this);
		}

		::System::Void set_SlotCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT_SET_SLOTCOUNT_OFFSET))(this, a1);
		}

		static ::System::Void _AddRecommend(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT__ADDRECOMMEND_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _InitRecData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPCOMPONENT__INITRECDATA_OFFSET))(this);
		}

	};
}
