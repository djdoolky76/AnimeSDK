#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DestroyCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define NAEGMJDLPMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA96890)
#define NAEGMJDLPMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA968A0)
#define NAEGMJDLPMC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBA96AE0)
#define NAEGMJDLPMC_HOGGAEBPJGO_OFFSET UNITYSDK_OFFSET(0xBA96930)
#define NAEGMJDLPMC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBA96AF0)
#define NAEGMJDLPMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA968E0)
#define NAEGMJDLPMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA96A30)
#define NAEGMJDLPMC_TICK_OFFSET UNITYSDK_OFFSET(0xBA96A80)

	class NAEGMJDLPMC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::DestroyCharacter* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyCharacter*))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_ONSKIP_OFFSET))(this);
		}

		::System::Void HOGGAEBPJGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGMJDLPMC_HOGGAEBPJGO_OFFSET))(this);
		}

	};
