#pragma once
#include "unitysdk/unitysdk.h"
class BCNMIFBIGIE;
namespace RPG::GameCore { class TaskContext; }

#define AEHNDNFMCHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB150FE0)
#define AEHNDNFMCHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB151010)

inline static constexpr unsigned int AEHNDNFMCHB_TypeDefinitionIndex = 55685;

	class AEHNDNFMCHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BCNMIFBIGIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BCNMIFBIGIE*))((::PBYTE)hIl2Cpp + AEHNDNFMCHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHNDNFMCHB_ONTASKBEGIN_OFFSET))(this);
		}

	};
