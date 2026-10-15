#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInsertAction; }
namespace RPG::GameCore { class TaskContext; }

#define LOFIKOLADHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FF430)
#define LOFIKOLADHM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7FF460)

inline static constexpr unsigned int LOFIKOLADHM_TypeDefinitionIndex = 54673;

	class LOFIKOLADHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + LOFIKOLADHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFIKOLADHM_EVALUATE_OFFSET))(this);
		}

	};
