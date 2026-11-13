#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideTrainerLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE940F0)
#define RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DE93E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideTrainerLevelRow_TypeDefinitionIndex = 10928;

	class AetherDivideTrainerLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 RareMonsterNumID; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 QuestID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideTrainerLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideTrainerLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRAINERLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
