#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetHitBoxActive; }
namespace RPG::GameCore { class TaskContext; }

#define LFDKPGPHHJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB668410)
#define LFDKPGPHHJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB668440)

inline static constexpr unsigned int LFDKPGPHHJA_TypeDefinitionIndex = 53167;

	class LFDKPGPHHJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + LFDKPGPHHJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDKPGPHHJA_EVALUATE_OFFSET))(this);
		}

	};
