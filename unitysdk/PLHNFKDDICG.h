#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class JPIOEBIPJPC;
namespace RPG::GameCore { class AdventureCameraLookAt; }
namespace RPG::GameCore { class AdventureCameraLookAtSimple; }
namespace RPG::GameCore { class TaskContext; }

#define PLHNFKDDICG_CTOR_OFFSET UNITYSDK_OFFSET(0xC306890)
#define PLHNFKDDICG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC306AF0)
#define PLHNFKDDICG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC306BE0)
#define PLHNFKDDICG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3070D0)
#define PLHNFKDDICG_TICK_OFFSET UNITYSDK_OFFSET(0xC306B40)

	class PLHNFKDDICG : public ::GELIALJDFBL
	{
	public:
		::JPIOEBIPJPC* GJBPIKOJDLM; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::AdventureCameraLookAt* ADKMHJGCAOH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAtSimple* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAtSimple*))((::PBYTE)hIl2Cpp + PLHNFKDDICG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHNFKDDICG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLHNFKDDICG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHNFKDDICG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHNFKDDICG_ONTASKRESET_OFFSET))(this);
		}

	};
