#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenMusicRhythmReadyPage; }
namespace System { class String; }

#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B41D0)
#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B41E0)
#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B41A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenMusicRhythmReadyPage_TypeDefinitionIndex = 22055;

	class OpenMusicRhythmReadyPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicValue; // 0x18
		::Il2CppArray<::System::String*>* MatchCase; // 0x20
		::Il2CppArray<::System::UInt32>* LevelId; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenMusicRhythmReadyPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenMusicRhythmReadyPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
