#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropWormCompassSetItemVisible; }
namespace RPG::GameCore { class TaskContext; }

#define IIEOMMHPDAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1643A660)
#define IIEOMMHPDAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1643A690)

inline static constexpr unsigned int IIEOMMHPDAK_TypeDefinitionIndex = 58367;

	class IIEOMMHPDAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWormCompassSetItemVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWormCompassSetItemVisible*))((::PBYTE)hIl2Cpp + IIEOMMHPDAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEOMMHPDAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
