#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define ABIKMCBIKFE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0FB4F0)
#define ABIKMCBIKFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0FB500)
#define ABIKMCBIKFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0FB540)
#define ABIKMCBIKFE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0FB9E0)
#define ABIKMCBIKFE_TICK_OFFSET UNITYSDK_OFFSET(0xB0FBA30)

inline static constexpr unsigned int ABIKMCBIKFE_TypeDefinitionIndex = 58249;

	class ABIKMCBIKFE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PauseGame* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseGame*))((::PBYTE)hIl2Cpp + ABIKMCBIKFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIKMCBIKFE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIKMCBIKFE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIKMCBIKFE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABIKMCBIKFE_TICK_OFFSET))(this, a1);
		}

	};
