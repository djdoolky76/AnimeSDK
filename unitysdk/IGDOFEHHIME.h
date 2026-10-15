#pragma once
#include "unitysdk/unitysdk.h"
class MCAIABAKIJJ;
namespace RPG::GameCore { class TaskContext; }

#define IGDOFEHHIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A090)
#define IGDOFEHHIME_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1640A0C0)

inline static constexpr unsigned int IGDOFEHHIME_TypeDefinitionIndex = 55044;

	class IGDOFEHHIME
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MCAIABAKIJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MCAIABAKIJJ*))((::PBYTE)hIl2Cpp + IGDOFEHHIME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDOFEHHIME_EVALUATE_OFFSET))(this);
		}

	};
