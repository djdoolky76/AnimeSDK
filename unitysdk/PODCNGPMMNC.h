#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define PODCNGPMMNC_CTOR_OFFSET UNITYSDK_OFFSET(0xC352510)
#define PODCNGPMMNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC352550)
#define PODCNGPMMNC_DOONENTER_OFFSET UNITYSDK_OFFSET(0xC352600)
#define PODCNGPMMNC_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xC352690)
#define PODCNGPMMNC_DOONTICK_OFFSET UNITYSDK_OFFSET(0xC352720)

inline static constexpr unsigned int PODCNGPMMNC_TypeDefinitionIndex = 57529;

	class PODCNGPMMNC : public ::EDLDHDMLJDH
	{
	public:
		::System::Boolean FMCHJKDPJDE; // 0xA0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PODCNGPMMNC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODCNGPMMNC_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PODCNGPMMNC_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + PODCNGPMMNC_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PODCNGPMMNC_DOONTICK_OFFSET))(this, a1);
		}

	};
