#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByDeployPuzzleBasePointIsAnswer; }
namespace RPG::GameCore { class TaskContext; }

#define JPEPJFGPLJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B5BF0)
#define JPEPJFGPLJE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2B5C20)

inline static constexpr unsigned int JPEPJFGPLJE_TypeDefinitionIndex = 57978;

	class JPEPJFGPLJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + JPEPJFGPLJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEPJFGPLJE_EVALUATE_OFFSET))(this);
		}

	};
