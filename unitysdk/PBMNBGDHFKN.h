#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCompareCharacterID; }
namespace RPG::GameCore { class TaskContext; }

#define PBMNBGDHFKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEDEC0)
#define PBMNBGDHFKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFEDEF0)

inline static constexpr unsigned int PBMNBGDHFKN_TypeDefinitionIndex = 53108;

	class PBMNBGDHFKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + PBMNBGDHFKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMNBGDHFKN_EVALUATE_OFFSET))(this);
		}

	};
