#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BlockWheelItem; }
namespace RPG::GameCore { class TaskContext; }

#define IIIEILCAKKP_CTOR_OFFSET UNITYSDK_OFFSET(0x164305C0)
#define IIIEILCAKKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164305D0)
#define IIIEILCAKKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16430610)
#define IIIEILCAKKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164307A0)
#define IIIEILCAKKP_TICK_OFFSET UNITYSDK_OFFSET(0x164307F0)

inline static constexpr unsigned int IIIEILCAKKP_TypeDefinitionIndex = 52539;

	class IIIEILCAKKP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::BlockWheelItem* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockWheelItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockWheelItem*))((::PBYTE)hIl2Cpp + IIIEILCAKKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIEILCAKKP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIEILCAKKP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIEILCAKKP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIIEILCAKKP_TICK_OFFSET))(this, a1);
		}

	};
