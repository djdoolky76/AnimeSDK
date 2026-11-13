#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropWormCompassSetItemVisible; }
namespace RPG::GameCore { class TaskContext; }

#define IIEOMMHPDAK_CTOR_OFFSET UNITYSDK_OFFSET(0x193CD680)
#define IIEOMMHPDAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x193CD6B0)

inline static constexpr unsigned int IIEOMMHPDAK_TypeDefinitionIndex = 59623;

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
