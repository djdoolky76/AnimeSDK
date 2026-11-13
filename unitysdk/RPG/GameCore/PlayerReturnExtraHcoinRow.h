#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnExtraHcoinRow; }

#define RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF755F0)
#define RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EF75370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnExtraHcoinRow_TypeDefinitionIndex = 14675;

	class PlayerReturnExtraHcoinRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraHcoinNumList; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraHcoinUIProgressRatioList; // 0x18
		::Il2CppArray<::System::UInt32>* HcoinThresholdList; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraRewardIDList; // 0x28
		::System::UInt32 OfflineDays; // 0x30
		::System::UInt32 ConfigID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerReturnExtraHcoinRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerReturnExtraHcoinRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNEXTRAHCOINROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
