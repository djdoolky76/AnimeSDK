#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyStageRow; }

#define RPG_GAMECORE_ALLEYSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60E240)
#define RPG_GAMECORE_ALLEYSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E60DA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyStageRow_TypeDefinitionIndex = 12705;

	class AlleyStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StageSpecialOrder; // 0x10
		::Il2CppArray<::System::UInt32>* StageAlleyEvent; // 0x18
		::RPG::Client::TextID StageTitle; // 0x20
		::RPG::Client::TextID StageDesc; // 0x30
		::System::UInt32 StageMainMission; // 0x40
		::System::UInt32 StageTarget; // 0x44
		::System::UInt32 TakeMainMission; // 0x48
		::System::UInt32 StageID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
