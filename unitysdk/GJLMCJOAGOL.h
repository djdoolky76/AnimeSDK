#pragma once
#include "unitysdk/unitysdk.h"
class EONGCCMIMIJ;
namespace RPG::GameCore { class TaskContext; }

#define GJLMCJOAGOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A639D0)
#define GJLMCJOAGOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A63A00)

inline static constexpr unsigned int GJLMCJOAGOL_TypeDefinitionIndex = 54931;

	class GJLMCJOAGOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EONGCCMIMIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EONGCCMIMIJ*))((::PBYTE)hIl2Cpp + GJLMCJOAGOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLMCJOAGOL_ONTASKBEGIN_OFFSET))(this);
		}

	};
