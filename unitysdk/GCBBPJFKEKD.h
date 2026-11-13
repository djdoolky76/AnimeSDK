#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PillarPuzzleInteract; }
namespace RPG::GameCore { class TaskContext; }

#define GCBBPJFKEKD_CTOR_OFFSET UNITYSDK_OFFSET(0x19E98ED0)
#define GCBBPJFKEKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19E98F00)

inline static constexpr unsigned int GCBBPJFKEKD_TypeDefinitionIndex = 59510;

	class GCBBPJFKEKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PillarPuzzleInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PillarPuzzleInteract*))((::PBYTE)hIl2Cpp + GCBBPJFKEKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBBPJFKEKD_ONTASKBEGIN_OFFSET))(this);
		}

	};
