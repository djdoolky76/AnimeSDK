#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMonsterUniqueID; }
namespace RPG::GameCore { class TaskContext; }

#define KFMJEHPHGKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB3BEBE0)
#define KFMJEHPHGKF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB3BEC10)

inline static constexpr unsigned int KFMJEHPHGKF_TypeDefinitionIndex = 54546;

	class KFMJEHPHGKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + KFMJEHPHGKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJEHPHGKF_EVALUATE_OFFSET))(this);
		}

	};
