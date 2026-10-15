#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByStatusCount; }
namespace RPG::GameCore { class TaskContext; }

#define DALOOHIDJKL_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC50B0)
#define DALOOHIDJKL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFC50E0)

inline static constexpr unsigned int DALOOHIDJKL_TypeDefinitionIndex = 54715;

	class DALOOHIDJKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + DALOOHIDJKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DALOOHIDJKL_EVALUATE_OFFSET))(this);
		}

	};
