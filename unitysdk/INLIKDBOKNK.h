#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAllowInstantKill; }
namespace RPG::GameCore { class TaskContext; }

#define INLIKDBOKNK_CTOR_OFFSET UNITYSDK_OFFSET(0x164E8C50)
#define INLIKDBOKNK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164E8C80)

inline static constexpr unsigned int INLIKDBOKNK_TypeDefinitionIndex = 54478;

	class INLIKDBOKNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + INLIKDBOKNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLIKDBOKNK_EVALUATE_OFFSET))(this);
		}

	};
