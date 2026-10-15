#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/Guid.h"
class GELIALJDFBL;
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define MOPKAGNODFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA312B0)
#define MOPKAGNODFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA312D0)
#define MOPKAGNODFC_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0xBA31620)
#define MOPKAGNODFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA31380)
#define MOPKAGNODFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA31550)
#define MOPKAGNODFC_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xBA31330)
#define MOPKAGNODFC_TICK_OFFSET UNITYSDK_OFFSET(0xBA315C0)

inline static constexpr unsigned int MOPKAGNODFC_TypeDefinitionIndex = 58184;

	class MOPKAGNODFC : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::PerformanceManager* CFHLPMAFJLH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::LevelPerformanceInitialize* OFKGLJOAMLD; // 0x28
		::GELIALJDFBL* CJHJNLGOJLA; // 0x30
		::System::Guid HAMICAAHNAM; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelPerformanceInitialize* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPerformanceInitialize*))((::PBYTE)hIl2Cpp + MOPKAGNODFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPKAGNODFC_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + MOPKAGNODFC_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPKAGNODFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPKAGNODFC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOPKAGNODFC_TICK_OFFSET))(this, a1);
		}

		::System::Void IJMONDLGAIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOPKAGNODFC_IJMONDLGAIP_OFFSET))(this, a1);
		}

	};
