#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFourRotateVoxelCurrentDirection; }
namespace RPG::GameCore { class TaskContext; }

#define JMLEJIPBFKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB269DE0)
#define JMLEJIPBFKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB269E10)

inline static constexpr unsigned int JMLEJIPBFKN_TypeDefinitionIndex = 52956;

	class JMLEJIPBFKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + JMLEJIPBFKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLEJIPBFKN_EVALUATE_OFFSET))(this);
		}

	};
