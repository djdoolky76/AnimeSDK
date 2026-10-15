#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartMusicRhythm; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_STARTMUSICRHYTHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEFF90)
#define RPG_GAMECORE_STARTMUSICRHYTHM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEFFA0)
#define RPG_GAMECORE_STARTMUSICRHYTHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEFF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythm_TypeDefinitionIndex = 22054;

	class StartMusicRhythm : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShowUi; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TutorialFlow; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FormalFlow; // 0x28
		::System::UInt32 LevelId; // 0x30
		::System::Boolean ShowSkipBtn; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartMusicRhythm* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartMusicRhythm* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
