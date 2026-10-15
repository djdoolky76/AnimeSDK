#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CBPPKOABNCB_CTOR_OFFSET UNITYSDK_OFFSET(0xC4B2D40)
#define CBPPKOABNCB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC4B2D70)

inline static constexpr unsigned int CBPPKOABNCB_TypeDefinitionIndex = 55508;

	class CBPPKOABNCB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + CBPPKOABNCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPPKOABNCB_EVALUATE_OFFSET))(this);
		}

	};
