#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHasCharacterRevived; }
namespace RPG::GameCore { class TaskContext; }

#define MACGLHDBBGF_CTOR_OFFSET UNITYSDK_OFFSET(0xC0A0680)
#define MACGLHDBBGF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC0A06B0)

inline static constexpr unsigned int MACGLHDBBGF_TypeDefinitionIndex = 55778;

	class MACGLHDBBGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + MACGLHDBBGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MACGLHDBBGF_EVALUATE_OFFSET))(this);
		}

	};
