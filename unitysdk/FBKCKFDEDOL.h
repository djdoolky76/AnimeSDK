#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RestoreTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define FBKCKFDEDOL_CTOR_OFFSET UNITYSDK_OFFSET(0x156A1480)
#define FBKCKFDEDOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A1490)
#define FBKCKFDEDOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156A14D0)
#define FBKCKFDEDOL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156A15D0)
#define FBKCKFDEDOL_TICK_OFFSET UNITYSDK_OFFSET(0x156A1620)

inline static constexpr unsigned int FBKCKFDEDOL_TypeDefinitionIndex = 53210;

	class FBKCKFDEDOL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RestoreTrackingMission* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RestoreTrackingMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RestoreTrackingMission*))((::PBYTE)hIl2Cpp + FBKCKFDEDOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKCKFDEDOL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKCKFDEDOL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKCKFDEDOL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBKCKFDEDOL_TICK_OFFSET))(this, a1);
		}

	};
