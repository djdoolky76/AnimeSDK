#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }

#define BGHNBPGGALG_CTOR_OFFSET UNITYSDK_OFFSET(0xB1894C0)
#define BGHNBPGGALG_LJFPGILKFAC_OFFSET UNITYSDK_OFFSET(0xB189330)
#define BGHNBPGGALG_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB188F50)
#define BGHNBPGGALG_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB1890C0)
#define BGHNBPGGALG_PFJOJBGLCFI_OFFSET UNITYSDK_OFFSET(0xB189230)

	class BGHNBPGGALG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHNBPGGALG_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + BGHNBPGGALG_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGHNBPGGALG_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void PFJOJBGLCFI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BGHNBPGGALG_PFJOJBGLCFI_OFFSET))(this, a1);
		}

		::System::Void LJFPGILKFAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + BGHNBPGGALG_LJFPGILKFAC_OFFSET))(this, a1, a2, a3);
		}

	};
