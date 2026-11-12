#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ParkourGameSetCameraFOV; }
namespace RPG::GameCore { class TaskContext; }

#define JFIPDCPCABE_CTOR_OFFSET UNITYSDK_OFFSET(0xB998BD0)
#define JFIPDCPCABE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB998BE0)
#define JFIPDCPCABE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB998C80)
#define JFIPDCPCABE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB998E70)
#define JFIPDCPCABE_TICK_OFFSET UNITYSDK_OFFSET(0xB998C20)

inline static constexpr unsigned int JFIPDCPCABE_TypeDefinitionIndex = 54216;

	class JFIPDCPCABE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ParkourGameSetCameraFOV* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParkourGameSetCameraFOV* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParkourGameSetCameraFOV*))((::PBYTE)hIl2Cpp + JFIPDCPCABE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIPDCPCABE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFIPDCPCABE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIPDCPCABE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIPDCPCABE_ONTASKRESET_OFFSET))(this);
		}

	};
