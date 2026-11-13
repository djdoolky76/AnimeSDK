#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTurnOwnerEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NGCEOBOCIPM_CTOR_OFFSET UNITYSDK_OFFSET(0x18E85EB0)
#define NGCEOBOCIPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18E85EE0)

inline static constexpr unsigned int NGCEOBOCIPM_TypeDefinitionIndex = 55865;

	class NGCEOBOCIPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + NGCEOBOCIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCEOBOCIPM_EVALUATE_OFFSET))(this);
		}

	};
