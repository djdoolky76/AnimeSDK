#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropReloadPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define GKKPCCNOAPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95520)
#define GKKPCCNOAPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A956B0)
#define GKKPCCNOAPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A95530)
#define GKKPCCNOAPJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A95660)
#define GKKPCCNOAPJ_TICK_OFFSET UNITYSDK_OFFSET(0x15A956F0)

inline static constexpr unsigned int GKKPCCNOAPJ_TypeDefinitionIndex = 58341;

	class GKKPCCNOAPJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::PropReloadPuzzle* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReloadPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReloadPuzzle*))((::PBYTE)hIl2Cpp + GKKPCCNOAPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKPCCNOAPJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKPCCNOAPJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKPCCNOAPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKKPCCNOAPJ_TICK_OFFSET))(this, a1);
		}

	};
