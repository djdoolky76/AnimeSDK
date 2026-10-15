#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfCustomerProcessBill; }
namespace RPG::GameCore { class TaskContext; }

#define LLCHJHBLHEG_APCGKNBLMPE_OFFSET UNITYSDK_OFFSET(0xB75B330)
#define LLCHJHBLHEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB75AE50)
#define LLCHJHBLHEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB75AE80)
#define LLCHJHBLHEG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB75B150)
#define LLCHJHBLHEG_TICK_OFFSET UNITYSDK_OFFSET(0xB75B1A0)

inline static constexpr unsigned int LLCHJHBLHEG_TypeDefinitionIndex = 52155;

	class LLCHJHBLHEG
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PCPOJALEGGF; // 0x28
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x30
		::System::Single KLBFFEFFJID; // 0x40
		::UnityEngine::Quaternion ACDOFFNEDEF; // 0x44
		::System::Single PGMIOKKLHIE; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfCustomerProcessBill*))((::PBYTE)hIl2Cpp + LLCHJHBLHEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCHJHBLHEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCHJHBLHEG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLCHJHBLHEG_TICK_OFFSET))(this, a1);
		}

		::System::Void APCGKNBLMPE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + LLCHJHBLHEG_APCGKNBLMPE_OFFSET))(this, a1);
		}

	};
