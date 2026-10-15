#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueOpenChest; }

#define PKECCFBEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B3480)
#define PKECCFBEMAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2B3490)
#define PKECCFBEMAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2B3530)
#define PKECCFBEMAP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2B3770)
#define PKECCFBEMAP_TICK_OFFSET UNITYSDK_OFFSET(0xC2B34D0)
#define PKECCFBEMAP__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xC2B37C0)

inline static constexpr unsigned int PKECCFBEMAP_TypeDefinitionIndex = 58798;

	class PKECCFBEMAP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerRogueOpenChest* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueOpenChest* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueOpenChest*))((::PBYTE)hIl2Cpp + PKECCFBEMAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKECCFBEMAP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKECCFBEMAP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKECCFBEMAP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKECCFBEMAP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKECCFBEMAP__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
