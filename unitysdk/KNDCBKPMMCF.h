#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByHasLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define KNDCBKPMMCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB579010)
#define KNDCBKPMMCF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB579040)

inline static constexpr unsigned int KNDCBKPMMCF_TypeDefinitionIndex = 53920;

	class KNDCBKPMMCF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + KNDCBKPMMCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCBKPMMCF_EVALUATE_OFFSET))(this);
		}

	};
