#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsEnemy; }
namespace RPG::GameCore { class TaskContext; }

#define FJCJMNPMCPF_CTOR_OFFSET UNITYSDK_OFFSET(0x157C2510)
#define FJCJMNPMCPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157C2540)

inline static constexpr unsigned int FJCJMNPMCPF_TypeDefinitionIndex = 54654;

	class FJCJMNPMCPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + FJCJMNPMCPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJCJMNPMCPF_EVALUATE_OFFSET))(this);
		}

	};
