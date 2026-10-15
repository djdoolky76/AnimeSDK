#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareRogueDiceRotateImmediately; }
namespace RPG::GameCore { class TaskContext; }

#define OFLPDOMNIJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3F700)
#define OFLPDOMNIJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE3F730)

inline static constexpr unsigned int OFLPDOMNIJF_TypeDefinitionIndex = 52590;

	class OFLPDOMNIJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + OFLPDOMNIJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLPDOMNIJF_EVALUATE_OFFSET))(this);
		}

	};
