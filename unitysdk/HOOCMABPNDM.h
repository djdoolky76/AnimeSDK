#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareControlSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define HOOCMABPNDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2AF10)
#define HOOCMABPNDM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AF2AF40)

inline static constexpr unsigned int HOOCMABPNDM_TypeDefinitionIndex = 55689;

	class HOOCMABPNDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + HOOCMABPNDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOCMABPNDM_EVALUATE_OFFSET))(this);
		}

	};
