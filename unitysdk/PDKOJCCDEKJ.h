#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfInteractCurrentSlot; }
namespace RPG::GameCore { class TaskContext; }

#define PDKOJCCDEKJ_APCGKNBLMPE_OFFSET UNITYSDK_OFFSET(0xC017670)
#define PDKOJCCDEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC017100)
#define PDKOJCCDEKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC017130)
#define PDKOJCCDEKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC017970)
#define PDKOJCCDEKJ_TICK_OFFSET UNITYSDK_OFFSET(0xC0179C0)

inline static constexpr unsigned int PDKOJCCDEKJ_TypeDefinitionIndex = 52177;

	class PDKOJCCDEKJ
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* EENKEBPDHCN; // 0x28
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x30
		::UnityEngine::Quaternion ACDOFFNEDEF; // 0x3C
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x4C
		::UnityEngine::Vector3 FCAOOKFEOHC; // 0x5C
		::System::Single KLBFFEFFJID; // 0x68
		::System::Single PGMIOKKLHIE; // 0x6C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + PDKOJCCDEKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKOJCCDEKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKOJCCDEKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDKOJCCDEKJ_TICK_OFFSET))(this, a1);
		}

		::System::Void APCGKNBLMPE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + PDKOJCCDEKJ_APCGKNBLMPE_OFFSET))(this, a1);
		}

	};
