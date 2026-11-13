#pragma once
#include "unitysdk/unitysdk.h"
class EMGMPMKEKOD;
namespace RPG::GameCore { class TaskContext; }

#define CEHJIJLKJKD_CTOR_OFFSET UNITYSDK_OFFSET(0x18818240)
#define CEHJIJLKJKD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18818270)

inline static constexpr unsigned int CEHJIJLKJKD_TypeDefinitionIndex = 56070;

	class CEHJIJLKJKD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EMGMPMKEKOD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EMGMPMKEKOD*))((::PBYTE)hIl2Cpp + CEHJIJLKJKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHJIJLKJKD_EVALUATE_OFFSET))(this);
		}

	};
