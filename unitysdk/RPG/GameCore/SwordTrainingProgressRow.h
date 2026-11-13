#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingTurnType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingProgressRow; }

#define RPG_GAMECORE_SWORDTRAININGPROGRESSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68EAA0)
#define RPG_GAMECORE_SWORDTRAININGPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E68E660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingProgressRow_TypeDefinitionIndex = 12493;

	class SwordTrainingProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActionIDList; // 0x10
		::System::UInt32 RecommendPower; // 0x18
		::RPG::GameCore::SwordTrainingTurnType TurnType; // 0x1C
		::RPG::Client::TextID TurnName; // 0x20
		::System::UInt32 PartnerAbilitySelectNum; // 0x30
		::System::UInt32 ExamID; // 0x34
		::RPG::Client::TextID PartnerAbilitySelectHint; // 0x38
		::System::UInt32 PartnerAbilityGroupID; // 0x48
		::System::UInt32 TurnID; // 0x4C
		::RPG::Client::TextID SectionHint; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPROGRESSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingProgressRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingProgressRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPROGRESSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
