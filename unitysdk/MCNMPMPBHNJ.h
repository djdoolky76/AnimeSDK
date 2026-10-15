#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LoadCharacterState; }
namespace RPG::GameCore { class TaskContext; }

#define MCNMPMPBHNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB889330)
#define MCNMPMPBHNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB889340)
#define MCNMPMPBHNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB889380)
#define MCNMPMPBHNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB889590)
#define MCNMPMPBHNJ_TICK_OFFSET UNITYSDK_OFFSET(0xB8895E0)

inline static constexpr unsigned int MCNMPMPBHNJ_TypeDefinitionIndex = 55142;

	class MCNMPMPBHNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LoadCharacterState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadCharacterState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadCharacterState*))((::PBYTE)hIl2Cpp + MCNMPMPBHNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNMPMPBHNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNMPMPBHNJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNMPMPBHNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCNMPMPBHNJ_TICK_OFFSET))(this, a1);
		}

	};
