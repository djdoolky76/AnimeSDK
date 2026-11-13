#pragma once
#include "unitysdk/unitysdk.h"
class OAJIEODKBDF;
namespace RPG::GameCore { class TaskContext; }

#define IEEAJJFNEBI_CTOR_OFFSET UNITYSDK_OFFSET(0x177A86F0)
#define IEEAJJFNEBI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x177A8720)

inline static constexpr unsigned int IEEAJJFNEBI_TypeDefinitionIndex = 59220;

	class IEEAJJFNEBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OAJIEODKBDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OAJIEODKBDF*))((::PBYTE)hIl2Cpp + IEEAJJFNEBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEAJJFNEBI_EVALUATE_OFFSET))(this);
		}

	};
