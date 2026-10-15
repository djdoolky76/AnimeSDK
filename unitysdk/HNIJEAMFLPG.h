#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMechanismBarState; }
namespace RPG::GameCore { class TaskContext; }

#define HNIJEAMFLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9BAC0)
#define HNIJEAMFLPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D9BAD0)
#define HNIJEAMFLPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D9BB10)
#define HNIJEAMFLPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D9BB60)
#define HNIJEAMFLPG_TICK_OFFSET UNITYSDK_OFFSET(0x15D9BBB0)

inline static constexpr unsigned int HNIJEAMFLPG_TypeDefinitionIndex = 55532;

	class HNIJEAMFLPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetMechanismBarState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMechanismBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMechanismBarState*))((::PBYTE)hIl2Cpp + HNIJEAMFLPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJEAMFLPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJEAMFLPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIJEAMFLPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNIJEAMFLPG_TICK_OFFSET))(this, a1);
		}

	};
