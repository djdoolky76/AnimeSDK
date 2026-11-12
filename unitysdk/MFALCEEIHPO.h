#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShuffleTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define MFALCEEIHPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC19AF90)
#define MFALCEEIHPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19AFA0)
#define MFALCEEIHPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC19AFE0)
#define MFALCEEIHPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC19B1E0)
#define MFALCEEIHPO_TICK_OFFSET UNITYSDK_OFFSET(0xC19B230)

inline static constexpr unsigned int MFALCEEIHPO_TypeDefinitionIndex = 56818;

	class MFALCEEIHPO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShuffleTargetList* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShuffleTargetList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShuffleTargetList*))((::PBYTE)hIl2Cpp + MFALCEEIHPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFALCEEIHPO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFALCEEIHPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFALCEEIHPO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFALCEEIHPO_TICK_OFFSET))(this, a1);
		}

	};
