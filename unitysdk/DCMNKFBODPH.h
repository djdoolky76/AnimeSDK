#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsGenderType; }
namespace RPG::GameCore { class TaskContext; }

#define DCMNKFBODPH_CTOR_OFFSET UNITYSDK_OFFSET(0xE24A690)
#define DCMNKFBODPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE24A6C0)

inline static constexpr unsigned int DCMNKFBODPH_TypeDefinitionIndex = 54660;

	class DCMNKFBODPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + DCMNKFBODPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMNKFBODPH_EVALUATE_OFFSET))(this);
		}

	};
