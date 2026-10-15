#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByGridFightHasTrait; }
namespace RPG::GameCore { class TaskContext; }

#define ILLCJJADBCD_CTOR_OFFSET UNITYSDK_OFFSET(0x164C4640)
#define ILLCJJADBCD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164C4670)

inline static constexpr unsigned int ILLCJJADBCD_TypeDefinitionIndex = 54607;

	class ILLCJJADBCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + ILLCJJADBCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLCJJADBCD_EVALUATE_OFFSET))(this);
		}

	};
