#pragma once
#include "unitysdk/unitysdk.h"
class EFLHKPDPJNF;
namespace RPG::GameCore { class TaskContext; }

#define FPNIKELFNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B851A00)
#define FPNIKELFNLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B851A30)
#define FPNIKELFNLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B851A70)

inline static constexpr unsigned int FPNIKELFNLA_TypeDefinitionIndex = 56682;

	class FPNIKELFNLA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EFLHKPDPJNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EFLHKPDPJNF*))((::PBYTE)hIl2Cpp + FPNIKELFNLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNIKELFNLA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNIKELFNLA_ONTASKBEGIN_OFFSET))(this);
		}

	};
