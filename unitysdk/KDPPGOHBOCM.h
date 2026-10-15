#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PPFilterStackEffect; }
namespace RPG::GameCore { class TaskContext; }

#define KDPPGOHBOCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB36F0F0)
#define KDPPGOHBOCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB36F100)
#define KDPPGOHBOCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB36F140)
#define KDPPGOHBOCM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB36FA70)
#define KDPPGOHBOCM_TICK_OFFSET UNITYSDK_OFFSET(0xB36FAC0)

inline static constexpr unsigned int KDPPGOHBOCM_TypeDefinitionIndex = 55254;

	class KDPPGOHBOCM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PPFilterStackEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PPFilterStackEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PPFilterStackEffect*))((::PBYTE)hIl2Cpp + KDPPGOHBOCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPPGOHBOCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPPGOHBOCM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPPGOHBOCM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDPPGOHBOCM_TICK_OFFSET))(this, a1);
		}

	};
