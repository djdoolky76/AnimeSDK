#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMOJMNKOILL;
class KGHDDIBDABP;
namespace RPG::Client { class ChimeraDuelGameSessionShopChimera; }
namespace RPG::Client { class ChimeraDuelGameSessionShopItem; }
namespace RPG::Client { class ChimeraDuelGameShopStallData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD490230)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD492E80)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GETLEFTSLOTINDEXOFBONUSCHIMERAPAIR_OFFSET UNITYSDK_OFFSET(0xD495E30)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_BONUSCHIMERAPAIRCOUNT_OFFSET UNITYSDK_OFFSET(0xD495DE0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_CHIMERASLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xD495D40)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_ITEMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xD495D90)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVECHIMERA_OFFSET UNITYSDK_OFFSET(0xD4906A0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xD490A40)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERALOCKED_OFFSET UNITYSDK_OFFSET(0xD4911B0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4930A0)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMLOCKED_OFFSET UNITYSDK_OFFSET(0xD491280)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMS_OFFSET UNITYSDK_OFFSET(0xD493860)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERAATSLOT_OFFSET UNITYSDK_OFFSET(0xD491610)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERA_OFFSET UNITYSDK_OFFSET(0xD491F00)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETITEMATSLOT_OFFSET UNITYSDK_OFFSET(0xD492460)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameShopStallData_TypeDefinitionIndex = 64769;

	class ChimeraDuelGameShopStallData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SlottedItems; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SlottedChimeras; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopChimera*>* _Chimeras; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelGameSessionShopItem*>* _Items; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _BonusChimeraPairLeftSlotMarkers; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::ChimeraDuelGameShopStallData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameShopStallData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_ChimeraSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_CHIMERASLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* TryGetChimeraAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERAATSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionShopChimera* TryGetChimera(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopChimera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETCHIMERA_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_ITEMSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionShopItem* TryGetItemAtSlot(::System::Int32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShopItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_TRYGETITEMATSLOT_OFFSET))(this, a1);
		}

		::System::Int32 get_BonusChimeraPairCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GET_BONUSCHIMERAPAIRCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLeftSlotIndexOfBonusChimeraPair(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_GETLEFTSLOTINDEXOFBONUSCHIMERAPAIR_OFFSET))(this, a1);
		}

		::System::Void SetChimeras(::System::Collections::Generic::IEnumerable_1<::KGHDDIBDABP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::KGHDDIBDABP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERAS_OFFSET))(this, a1);
		}

		::System::Void SetItems(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::DMOJMNKOILL*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::DMOJMNKOILL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMS_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveChimera(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVECHIMERA_OFFSET))(this, a1);
		}

		::System::Void RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void SetChimeraLocked(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETCHIMERALOCKED_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemLocked(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA_SETITEMLOCKED_OFFSET))(this, a1, a2);
		}

	};
}
