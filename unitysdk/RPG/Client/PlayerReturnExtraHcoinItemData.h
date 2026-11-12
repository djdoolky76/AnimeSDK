#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class PlayerReturnExtraHcoinItemData; }

#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE697750)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE697990)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_GET_REWARDITEMDATA_OFFSET UNITYSDK_OFFSET(0xE697A20)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA__CREATEHCOINITEMDATA_OFFSET UNITYSDK_OFFSET(0xE6979A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnExtraHcoinItemData_TypeDefinitionIndex = 63281;

	class PlayerReturnExtraHcoinItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _RewardItemData; // 0x10
		::System::UInt32 RewardID; // 0x18
		::System::UInt32 CurrentProgressHcoin; // 0x1C
		::System::Single BeginUIRatio; // 0x20
		::System::Single ExtraHcoinUIProgressRatio; // 0x24
		::System::UInt32 HcoinThreshold; // 0x28
		::System::UInt32 ExtraHcoinNum; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnExtraHcoinItemData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::RPG::Client::PlayerReturnExtraHcoinItemData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::ItemData* _CreateHCoinItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA__CREATEHCOINITEMDATA_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_RewardItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_GET_REWARDITEMDATA_OFFSET))(this);
		}

	};
}
