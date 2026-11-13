#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaHexEquipmentSlotItemInfoState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotItemInfo; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotPanelInfo; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1E0D6780)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D6820)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_EQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1E0D6B50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_HEX_OFFSET UNITYSDK_OFFSET(0x1E0D6740)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1E0D6760)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1E0D6930)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0x1E0D6A40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_HEX_OFFSET UNITYSDK_OFFSET(0x1E0D6750)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1E0D6770)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_UNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1E0D6C00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__INIT_OFFSET UNITYSDK_OFFSET(0x1E0D6830)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1E0D68C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotItemInfo_TypeDefinitionIndex = 74996;

	class RogueTournPersonaHexEquipmentSlotItemInfo : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournHex* _Hex_k__BackingField; // 0x10
		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* _SlotPanelInfo; // 0x18
		::System::Int32 _Index; // 0x20
		::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState _State_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournHex* get_Hex()
		{
			return ((::RPG::Client::IRogueTournHex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_HEX_OFFSET))(this);
		}

		::System::Void set_Hex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_HEX_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState get_State()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_STATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo* Create(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*(*)(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__INIT_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean IsNewUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISNEWUNLOCK_OFFSET))(this);
		}

		::System::Void EquipHex(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_EQUIPHEX_OFFSET))(this, a1);
		}

		::System::Void UnEquipHex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_UNEQUIPHEX_OFFSET))(this);
		}

		::System::Void _UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__UPDATESTATE_OFFSET))(this);
		}

	};
}
