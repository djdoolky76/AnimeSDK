#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }

#define DILIKOIGENM_CTOR_OFFSET UNITYSDK_OFFSET(0xF20E720)
#define DILIKOIGENM_GET_COIN_OFFSET UNITYSDK_OFFSET(0xF20E6E0)
#define DILIKOIGENM_GET_NUM_OFFSET UNITYSDK_OFFSET(0xF20E700)
#define DILIKOIGENM_SET_COIN_OFFSET UNITYSDK_OFFSET(0xF20E6F0)
#define DILIKOIGENM_SET_NUM_OFFSET UNITYSDK_OFFSET(0xF20E710)

inline static constexpr unsigned int DILIKOIGENM_TypeDefinitionIndex = 79421;

	class DILIKOIGENM : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* _Coin_k__BackingField; // 0x10
		::System::UInt32 _Num_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*, ::System::UInt32))((::PBYTE)hIl2Cpp + DILIKOIGENM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* get_Coin()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + DILIKOIGENM_GET_COIN_OFFSET))(this);
		}

		::System::Void set_Coin(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + DILIKOIGENM_SET_COIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DILIKOIGENM_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DILIKOIGENM_SET_NUM_OFFSET))(this, a1);
		}

	};
