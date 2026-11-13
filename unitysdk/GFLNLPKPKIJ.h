#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfChangeAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define GFLNLPKPKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B49A1E0)
#define GFLNLPKPKIJ_GJFCDOGCDJF_OFFSET UNITYSDK_OFFSET(0x1B49A350)
#define GFLNLPKPKIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B49A210)
#define GFLNLPKPKIJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B49A510)
#define GFLNLPKPKIJ_TICK_OFFSET UNITYSDK_OFFSET(0x1B49A2B0)

inline static constexpr unsigned int GFLNLPKPKIJ_TypeDefinitionIndex = 53281;

	class GFLNLPKPKIJ
	{
	public:
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfChangeAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfChangeAnimState*))((::PBYTE)hIl2Cpp + GFLNLPKPKIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLNLPKPKIJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFLNLPKPKIJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLNLPKPKIJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void GJFCDOGCDJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLNLPKPKIJ_GJFCDOGCDJF_OFFSET))(this);
		}

	};
