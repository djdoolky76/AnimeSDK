#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DamagePerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define HIPAIGMJNOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D00FA0)
#define HIPAIGMJNOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D00FD0)

inline static constexpr unsigned int HIPAIGMJNOE_TypeDefinitionIndex = 54986;

	class HIPAIGMJNOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamagePerformFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamagePerformFinish*))((::PBYTE)hIl2Cpp + HIPAIGMJNOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPAIGMJNOE_ONTASKBEGIN_OFFSET))(this);
		}

	};
