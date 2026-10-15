#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseMainCharacterOnly; }

#define MAIJKFAOPMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB848300)
#define MAIJKFAOPMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB848310)
#define MAIJKFAOPMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB848350)
#define MAIJKFAOPMB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8483F0)
#define MAIJKFAOPMB_TICK_OFFSET UNITYSDK_OFFSET(0xB848440)

inline static constexpr unsigned int MAIJKFAOPMB_TypeDefinitionIndex = 53463;

	class MAIJKFAOPMB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseMainCharacterOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseMainCharacterOnly*))((::PBYTE)hIl2Cpp + MAIJKFAOPMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIJKFAOPMB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIJKFAOPMB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIJKFAOPMB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAIJKFAOPMB_TICK_OFFSET))(this, a1);
		}

	};
