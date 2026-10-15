#pragma once
#include "unitysdk/unitysdk.h"
class NDFKINKPKHF;
namespace RPG::GameCore { class TaskContext; }

#define BBNKBGBGMBP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8C790)
#define BBNKBGBGMBP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E8C7C0)

inline static constexpr unsigned int BBNKBGBGMBP_TypeDefinitionIndex = 54502;

	class BBNKBGBGMBP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NDFKINKPKHF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NDFKINKPKHF*))((::PBYTE)hIl2Cpp + BBNKBGBGMBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNKBGBGMBP_EVALUATE_OFFSET))(this);
		}

	};
