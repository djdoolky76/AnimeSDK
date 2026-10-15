#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetEntityType; }
namespace RPG::GameCore { class TaskContext; }

#define NGDDILHJHFO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9CB20)
#define NGDDILHJHFO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB9CB50)

inline static constexpr unsigned int NGDDILHJHFO_TypeDefinitionIndex = 54717;

	class NGDDILHJHFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + NGDDILHJHFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDDILHJHFO_EVALUATE_OFFSET))(this);
		}

	};
