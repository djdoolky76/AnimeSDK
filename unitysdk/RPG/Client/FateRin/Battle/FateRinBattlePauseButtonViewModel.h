#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class ALIACDLNBJB;
class BJMHJJIELLH;
class CEEGMMCFCBG;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF75A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1DCF7720)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEPAUSEBUTTONVIEWMODEL__PAUSE_OFFSET UNITYSDK_OFFSET(0x1DCF76B0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattlePauseButtonViewModel_TypeDefinitionIndex = 83727;

	class FateRinBattlePauseButtonViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::ALIACDLNBJB* _TutorialService; // 0x20
		::BJMHJJIELLH* _BattleService; // 0x28
		::CEEGMMCFCBG* _Pause_k__BackingField; // 0x30
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
