#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Main_ElfWaiterCleanObstacle; }
namespace RPG::GameCore { class TaskContext; }

#define IGBHMBMHEPN_CTOR_OFFSET UNITYSDK_OFFSET(0x19F409C0)
#define IGBHMBMHEPN_MGLBACKKICI_OFFSET UNITYSDK_OFFSET(0x19F40ED0)
#define IGBHMBMHEPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19F409F0)
#define IGBHMBMHEPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19F40D70)
#define IGBHMBMHEPN_TICK_OFFSET UNITYSDK_OFFSET(0x19F40DC0)

inline static constexpr unsigned int IGBHMBMHEPN_TypeDefinitionIndex = 53273;

	class IGBHMBMHEPN
	{
	public:
		::RPG::Client::ElfRestaurantGameInstance* OFLDOAIGGDH; // 0x28
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PBCEKCMKJNB; // 0x30
		::System::Boolean BIGCMCKDGCC; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single GAELKHODKJP; // 0x3C
		::System::Single MIIEMGLCLNF; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfWaiterCleanObstacle*))((::PBYTE)hIl2Cpp + IGBHMBMHEPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBHMBMHEPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBHMBMHEPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGBHMBMHEPN_TICK_OFFSET))(this, a1);
		}

		::System::Void MGLBACKKICI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBHMBMHEPN_MGLBACKKICI_OFFSET))(this);
		}

	};
