#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainResistBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define NGBJMNBPENA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA2080)
#define NGBJMNBPENA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBA20B0)

inline static constexpr unsigned int NGBJMNBPENA_TypeDefinitionIndex = 54892;

	class NGBJMNBPENA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + NGBJMNBPENA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBJMNBPENA_EVALUATE_OFFSET))(this);
		}

	};
