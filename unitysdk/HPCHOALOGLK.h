#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckElfTodayManaged; }
namespace RPG::GameCore { class TaskContext; }

#define HPCHOALOGLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2F650)
#define HPCHOALOGLK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AF2F680)

inline static constexpr unsigned int HPCHOALOGLK_TypeDefinitionIndex = 59207;

	class HPCHOALOGLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + HPCHOALOGLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCHOALOGLK_EVALUATE_OFFSET))(this);
		}

	};
