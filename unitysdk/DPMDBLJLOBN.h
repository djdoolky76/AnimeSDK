#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByGridFightHasSameTrait; }
namespace RPG::GameCore { class TaskContext; }

#define DPMDBLJLOBN_CTOR_OFFSET UNITYSDK_OFFSET(0x181B0DE0)
#define DPMDBLJLOBN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x181B0E10)

inline static constexpr unsigned int DPMDBLJLOBN_TypeDefinitionIndex = 55773;

	class DPMDBLJLOBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + DPMDBLJLOBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMDBLJLOBN_EVALUATE_OFFSET))(this);
		}

	};
