#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingMoodState.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingMoodRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGMOODROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1D180)
#define RPG_GAMECORE_SWORDTRAININGMOODROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB1CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingMoodRow_TypeDefinitionIndex = 12447;

	class SwordTrainingMoodRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::System::String* MoodIcon; // 0x18
		::RPG::Client::TextID EffectNumDesc; // 0x20
		::RPG::Client::TextID EffectDesc; // 0x30
		::System::UInt32 MaximumValue; // 0x40
		::System::UInt32 MoodLevel; // 0x44
		::System::UInt32 MinimumValue; // 0x48
		::RPG::GameCore::SwordTrainingMoodState MoodStatus; // 0x4C
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
