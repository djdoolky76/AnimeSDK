#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATEBGMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAFDA0)
#define RPG_CLIENT_FATEBGMSTATE_FORCEPLAYMENUBGM_OFFSET UNITYSDK_OFFSET(0x1CBAFDF0)
#define RPG_CLIENT_FATEBGMSTATE_INIT_OFFSET UNITYSDK_OFFSET(0x1CBAFDB0)
#define RPG_CLIENT_FATEBGMSTATE_SETPLAYMENUBGM_OFFSET UNITYSDK_OFFSET(0x1CBAFFD0)
#define RPG_CLIENT_FATEBGMSTATE_STOPMENUBGM_OFFSET UNITYSDK_OFFSET(0x1CBB0030)
#define RPG_CLIENT_FATEBGMSTATE__PLAYBGM_OFFSET UNITYSDK_OFFSET(0x1CBAFE40)
#define RPG_CLIENT_FATEBGMSTATE__STOPBGM_OFFSET UNITYSDK_OFFSET(0x1CBB0080)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBGMState_TypeDefinitionIndex = 65469;

	class FateBGMState : public ::System::Object
	{
	public:
		::System::Boolean _BGMPlayingState; // 0x10
		// static const ::System::String* _MENU_BGM_STATE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_INIT_OFFSET))(this);
		}

		::System::Void ForcePlayMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_FORCEPLAYMENUBGM_OFFSET))(this);
		}

		::System::Void SetPlayMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_SETPLAYMENUBGM_OFFSET))(this);
		}

		::System::Void StopMenuBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE_STOPMENUBGM_OFFSET))(this);
		}

		::System::Void _PlayBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE__PLAYBGM_OFFSET))(this);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBGMSTATE__STOPBGM_OFFSET))(this);
		}

	};
}
