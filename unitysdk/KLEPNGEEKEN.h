#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetInCameraScreenScope; }
namespace RPG::GameCore { class TaskContext; }

#define KLEPNGEEKEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB51F5B0)
#define KLEPNGEEKEN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB51F5E0)

inline static constexpr unsigned int KLEPNGEEKEN_TypeDefinitionIndex = 54718;

	class KLEPNGEEKEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + KLEPNGEEKEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEPNGEEKEN_EVALUATE_OFFSET))(this);
		}

	};
