#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingPartnerGroupRow; }

#define RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4C080)
#define RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4BF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerGroupRow_TypeDefinitionIndex = 12441;

	class SwordTrainingPartnerGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PartnerAbilityDrop; // 0x10
		::System::UInt32 PartnerAbilityWeight; // 0x18
		::System::UInt32 PartnerAbilityGroupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingPartnerGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingPartnerGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
