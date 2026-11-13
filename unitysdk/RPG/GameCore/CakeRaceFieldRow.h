#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionRandomType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HIKAIJHKGNL;
class KDHICPODIMK;
namespace RPG::GameCore { class CakeRaceFieldRow; }

#define RPG_GAMECORE_CAKERACEFIELDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFA880)
#define RPG_GAMECORE_CAKERACEFIELDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBFA1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFieldRow_TypeDefinitionIndex = 11007;

	class CakeRaceFieldRow : public ::System::Object
	{
	public:
		::Il2CppArray<::KDHICPODIMK*>* FieldSectionWeight; // 0x10
		::Il2CppArray<::HIKAIJHKGNL*>* FieldUnlockConditionList; // 0x18
		::Il2CppArray<::KDHICPODIMK*>* FieldCatWeight; // 0x20
		::Il2CppArray<::KDHICPODIMK*>* FieldEffectWeight; // 0x28
		::Il2CppArray<::System::UInt32>* FieldBattleItemList; // 0x30
		::System::UInt32 FieldBetCost; // 0x38
		::RPG::GameCore::CakeRaceRegionRandomType RegionRandomType; // 0x3C
		::System::Boolean IsMultiPlaySupported; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 FieldSpecialBetCost; // 0x44
		::System::UInt32 FieldCatNum; // 0x48
		::System::UInt32 FieldScoreRate; // 0x4C
		::RPG::Client::TextID FieldDesc; // 0x50
		::System::UInt32 FieldSectionNum; // 0x60
		::System::UInt32 FieldCost; // 0x64
		::RPG::Client::TextID FieldName; // 0x68
		::System::UInt32 RewardID; // 0x78
		::System::UInt32 FieldID; // 0x7C
		::RPG::Client::TextID FieldUnlockDesc; // 0x80
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
