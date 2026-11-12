#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingMoodState.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingMoodRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGMOODROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFA060)
#define RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EDF9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingMoodRow_TypeDefinitionIndex = 12514;

	class SwordTrainingMoodRow : public ::System::Object
	{
	public:
		::System::String* MoodIcon; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::RPG::GameCore::SwordTrainingMoodState MoodStatus; // 0x20
		::System::UInt32 MaximumValue; // 0x24
		::System::UInt32 MoodLevel; // 0x28
		::System::UInt32 MinimumValue; // 0x2C
		::RPG::Client::TextID EffectNumDesc; // 0x30
		::RPG::Client::TextID EffectDesc; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGMOODROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingMoodRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingMoodRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
