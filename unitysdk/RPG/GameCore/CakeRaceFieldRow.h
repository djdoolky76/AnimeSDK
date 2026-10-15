#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionRandomType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HIKAIJHKGNL;
class KDHICPODIMK;
namespace RPG::GameCore { class CakeRaceFieldRow; }

#define RPG_GAMECORE_CAKERACEFIELDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54F4E0)
#define RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D54EE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFieldRow_TypeDefinitionIndex = 10991;

	class CakeRaceFieldRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FieldBattleItemList; // 0x10
		::Il2CppArray<::HIKAIJHKGNL*>* FieldUnlockConditionList; // 0x18
		::Il2CppArray<::KDHICPODIMK*>* FieldSectionWeight; // 0x20
		::Il2CppArray<::KDHICPODIMK*>* FieldCatWeight; // 0x28
		::Il2CppArray<::KDHICPODIMK*>* FieldEffectWeight; // 0x30
		::RPG::Client::TextID FieldDesc; // 0x38
		::RPG::Client::TextID FieldName; // 0x48
		::System::UInt32 FieldCatNum; // 0x58
		::System::UInt32 FieldSectionNum; // 0x5C
		::System::UInt32 FieldSpecialBetCost; // 0x60
		::System::UInt32 FieldBetCost; // 0x64
		::System::UInt32 FieldScoreRate; // 0x68
		::System::Boolean IsMultiPlaySupported; // 0x6C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID FieldUnlockDesc; // 0x70
		::System::UInt32 FieldID; // 0x80
		::System::UInt32 FieldCost; // 0x84
		::System::UInt32 RewardID; // 0x88
		::RPG::GameCore::CakeRaceRegionRandomType RegionRandomType; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceFieldRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceFieldRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
