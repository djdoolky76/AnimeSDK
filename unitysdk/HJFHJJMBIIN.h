#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsRotatableTimeRewindTarget; }
namespace RPG::GameCore { class TaskContext; }

#define HJFHJJMBIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D12D80)
#define HJFHJJMBIIN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D12DB0)

inline static constexpr unsigned int HJFHJJMBIIN_TypeDefinitionIndex = 53367;

	class HJFHJJMBIIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + HJFHJJMBIIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFHJJMBIIN_EVALUATE_OFFSET))(this);
		}

	};
