#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PerformDelayExecute; }
namespace RPG::GameCore { class TaskContext; }

#define NNBCIEMBHIE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5841D0)
#define NNBCIEMBHIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC584200)

inline static constexpr unsigned int NNBCIEMBHIE_TypeDefinitionIndex = 56441;

	class NNBCIEMBHIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformDelayExecute* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformDelayExecute*))((::PBYTE)hIl2Cpp + NNBCIEMBHIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBCIEMBHIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
