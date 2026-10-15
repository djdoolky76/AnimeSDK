#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByCheckMoveInput; }
namespace RPG::GameCore { class TaskContext; }

#define IEMCOJGGNEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF90E0)
#define IEMCOJGGNEH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15EF9110)

inline static constexpr unsigned int IEMCOJGGNEH_TypeDefinitionIndex = 53123;

	class IEMCOJGGNEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + IEMCOJGGNEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMCOJGGNEH_EVALUATE_OFFSET))(this);
		}

	};
