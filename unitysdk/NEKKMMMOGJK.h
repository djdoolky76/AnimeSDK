#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanTable; }
namespace RPG::GameCore { class TaskContext; }

#define NEKKMMMOGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x16FE8900)
#define NEKKMMMOGJK_MGLBACKKICI_OFFSET UNITYSDK_OFFSET(0x16FE8E10)
#define NEKKMMMOGJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FE8930)
#define NEKKMMMOGJK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16FE8CB0)
#define NEKKMMMOGJK_TICK_OFFSET UNITYSDK_OFFSET(0x16FE8D00)

inline static constexpr unsigned int NEKKMMMOGJK_TypeDefinitionIndex = 53274;

	class NEKKMMMOGJK
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* OFLDOAIGGDH; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x30
		::System::Single GAELKHODKJP; // 0x38
		::System::Boolean BIGCMCKDGCC; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single MIIEMGLCLNF; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterCleanTable*))((::PBYTE)hIl2Cpp + NEKKMMMOGJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKKMMMOGJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKKMMMOGJK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKKMMMOGJK_TICK_OFFSET))(this, a1);
		}

		::System::Void MGLBACKKICI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKKMMMOGJK_MGLBACKKICI_OFFSET))(this);
		}

	};
