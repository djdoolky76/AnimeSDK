#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfPlayEntityBehavior; }
namespace RPG::GameCore { class TaskContext; }

#define LOFIFOABEML_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F8820)
#define LOFIFOABEML_NCBOBIOODAP_OFFSET UNITYSDK_OFFSET(0xB7F8AA0)
#define LOFIFOABEML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7F8850)
#define LOFIFOABEML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7F8DA0)

inline static constexpr unsigned int LOFIFOABEML_TypeDefinitionIndex = 52178;

	class LOFIFOABEML
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* DKPFOJDAALN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*))((::PBYTE)hIl2Cpp + LOFIFOABEML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFIFOABEML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFIFOABEML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void NCBOBIOODAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFIFOABEML_NCBOBIOODAP_OFFSET))(this);
		}

	};
