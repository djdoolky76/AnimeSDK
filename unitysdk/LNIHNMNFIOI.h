#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GetWormCompassResult; }
namespace RPG::GameCore { class TaskContext; }

#define LNIHNMNFIOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5907B0)
#define LNIHNMNFIOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A590DC0)
#define LNIHNMNFIOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5907C0)
#define LNIHNMNFIOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A590D10)
#define LNIHNMNFIOI_TICK_OFFSET UNITYSDK_OFFSET(0x1A590D60)

inline static constexpr unsigned int LNIHNMNFIOI_TypeDefinitionIndex = 59375;

	class LNIHNMNFIOI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::GetWormCompassResult* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetWormCompassResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetWormCompassResult*))((::PBYTE)hIl2Cpp + LNIHNMNFIOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIHNMNFIOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIHNMNFIOI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNIHNMNFIOI_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIHNMNFIOI_DISPOSE_OFFSET))(this);
		}

	};
