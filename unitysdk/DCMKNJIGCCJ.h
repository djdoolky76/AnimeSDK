#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckColonyTrace; }
namespace RPG::GameCore { class TaskContext; }

#define DCMKNJIGCCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE251980)
#define DCMKNJIGCCJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE2519B0)

inline static constexpr unsigned int DCMKNJIGCCJ_TypeDefinitionIndex = 53129;

	class DCMKNJIGCCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + DCMKNJIGCCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMKNJIGCCJ_EVALUATE_OFFSET))(this);
		}

	};
