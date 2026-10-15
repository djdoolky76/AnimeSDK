#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadLittleGameArea; }

#define IHHJBPLIJNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1641F310)
#define IHHJBPLIJNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1641F450)
#define IHHJBPLIJNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1641F320)
#define IHHJBPLIJNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1641F400)
#define IHHJBPLIJNJ_TICK_OFFSET UNITYSDK_OFFSET(0x1641F490)

inline static constexpr unsigned int IHHJBPLIJNJ_TypeDefinitionIndex = 58842;

	class IHHJBPLIJNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UnloadLittleGameArea* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + IHHJBPLIJNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJBPLIJNJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJBPLIJNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJBPLIJNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHHJBPLIJNJ_TICK_OFFSET))(this, a1);
		}

	};
