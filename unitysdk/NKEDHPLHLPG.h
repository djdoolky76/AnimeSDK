#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define NKEDHPLHLPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC32F40)
#define NKEDHPLHLPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC32F50)
#define NKEDHPLHLPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC32F90)
#define NKEDHPLHLPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC33010)
#define NKEDHPLHLPG_TICK_OFFSET UNITYSDK_OFFSET(0xBC33060)

inline static constexpr unsigned int NKEDHPLHLPG_TypeDefinitionIndex = 53302;

	class NKEDHPLHLPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchBubbleTalk* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBubbleTalk*))((::PBYTE)hIl2Cpp + NKEDHPLHLPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEDHPLHLPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEDHPLHLPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEDHPLHLPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKEDHPLHLPG_TICK_OFFSET))(this, a1);
		}

	};
