#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class ALIACDLNBJB;
class BJMHJJIELLH;
class CEEGMMCFCBG;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCED95D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0xCED9750)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__PAUSE_OFFSET UNITYSDK_OFFSET(0xCED96E0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattlePauseButtonViewModel_TypeDefinitionIndex = 80948;

	class FateRinBattlePauseButtonViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::CEEGMMCFCBG* _Pause_k__BackingField; // 0x20
		::ALIACDLNBJB* _TutorialService; // 0x28
		::BJMHJJIELLH* _BattleService; // 0x30
		::System::Void _ctor(::BJMHJJIELLH* a1, ::ALIACDLNBJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BJMHJJIELLH*, ::ALIACDLNBJB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__PAUSE_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_Pause()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_GET_PAUSE_OFFSET))(this);
		}

	};
}
