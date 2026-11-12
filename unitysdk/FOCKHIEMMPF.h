#pragma once
#include "unitysdk/unitysdk.h"
class NNMNLEFGMOC;
namespace RPG::GameCore { class TaskContext; }

#define FOCKHIEMMPF_CTOR_OFFSET UNITYSDK_OFFSET(0x16813240)
#define FOCKHIEMMPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16813270)

inline static constexpr unsigned int FOCKHIEMMPF_TypeDefinitionIndex = 56232;

	class FOCKHIEMMPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NNMNLEFGMOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NNMNLEFGMOC*))((::PBYTE)hIl2Cpp + FOCKHIEMMPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCKHIEMMPF_EVALUATE_OFFSET))(this);
		}

	};
