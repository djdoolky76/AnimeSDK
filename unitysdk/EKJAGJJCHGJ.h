#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterProcessEvent; }
namespace RPG::GameCore { class TaskContext; }

#define EKJAGJJCHGJ_APCGKNBLMPE_OFFSET UNITYSDK_OFFSET(0x154FBEB0)
#define EKJAGJJCHGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x154FAAA0)
#define EKJAGJJCHGJ_GEJCDMKONEB_OFFSET UNITYSDK_OFFSET(0x154FADA0)
#define EKJAGJJCHGJ_JAHEGOPGECP_OFFSET UNITYSDK_OFFSET(0x154FBC10)
#define EKJAGJJCHGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154FAAC0)
#define EKJAGJJCHGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x154FB9E0)
#define EKJAGJJCHGJ_TICK_OFFSET UNITYSDK_OFFSET(0x154FBA30)

inline static constexpr unsigned int EKJAGJJCHGJ_TypeDefinitionIndex = 52171;

	class EKJAGJJCHGJ
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* OFLDOAIGGDH; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x30
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x38
		::System::Single PGMIOKKLHIE; // 0x48
		::System::Single KLBFFEFFJID; // 0x4C
		::System::Single FMLMBCPKBMC; // 0x50
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x54
		::UnityEngine::Vector3 FCAOOKFEOHC; // 0x60
		::System::Single ILENJCMADMG; // 0x6C
		::System::Boolean ADLOALLJMOB; // 0x70
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion ACDOFFNEDEF; // 0x74
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterProcessEvent*))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_TICK_OFFSET))(this, a1);
		}

		::System::Void APCGKNBLMPE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_APCGKNBLMPE_OFFSET))(this, a1);
		}

		::System::Void GEJCDMKONEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_GEJCDMKONEB_OFFSET))(this);
		}

		::System::Void JAHEGOPGECP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJAGJJCHGJ_JAHEGOPGECP_OFFSET))(this);
		}

	};
