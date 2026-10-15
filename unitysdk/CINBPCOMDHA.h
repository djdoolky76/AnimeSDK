#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsDamageType; }
namespace RPG::GameCore { class TaskContext; }

#define CINBPCOMDHA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF87460)
#define CINBPCOMDHA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF87490)

inline static constexpr unsigned int CINBPCOMDHA_TypeDefinitionIndex = 54649;

	class CINBPCOMDHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + CINBPCOMDHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINBPCOMDHA_EVALUATE_OFFSET))(this);
		}

	};
