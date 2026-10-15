#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define PLLLBCOBKAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC30B080)
#define PLLLBCOBKAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC30B090)
#define PLLLBCOBKAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC30B0D0)
#define PLLLBCOBKAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC30B290)
#define PLLLBCOBKAI_TICK_OFFSET UNITYSDK_OFFSET(0xC30B2E0)

inline static constexpr unsigned int PLLLBCOBKAI_TypeDefinitionIndex = 55318;

	class PLLLBCOBKAI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ResetRedStance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetRedStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetRedStance*))((::PBYTE)hIl2Cpp + PLLLBCOBKAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLLBCOBKAI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLLBCOBKAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLLBCOBKAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLLLBCOBKAI_TICK_OFFSET))(this, a1);
		}

	};
