#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define MNNIFGIPKGD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA189D0)
#define MNNIFGIPKGD_DOONENTER_OFFSET UNITYSDK_OFFSET(0xBA18A10)
#define MNNIFGIPKGD_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xBA18A80)

inline static constexpr unsigned int MNNIFGIPKGD_TypeDefinitionIndex = 57516;

	class MNNIFGIPKGD : public ::EDLDHDMLJDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNNIFGIPKGD_CTOR_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNNIFGIPKGD_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + MNNIFGIPKGD_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
