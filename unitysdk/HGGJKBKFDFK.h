#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCharacterID; }
namespace RPG::GameCore { class TaskContext; }

#define HGGJKBKFDFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C9EF80)
#define HGGJKBKFDFK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C9EFB0)

inline static constexpr unsigned int HGGJKBKFDFK_TypeDefinitionIndex = 54521;

	class HGGJKBKFDFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + HGGJKBKFDFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJKBKFDFK_EVALUATE_OFFSET))(this);
		}

	};
