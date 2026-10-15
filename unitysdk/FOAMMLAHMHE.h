#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByRandomChance; }
namespace RPG::GameCore { class TaskContext; }

#define FOAMMLAHMHE_CTOR_OFFSET UNITYSDK_OFFSET(0x158DFB00)
#define FOAMMLAHMHE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158DFB30)

inline static constexpr unsigned int FOAMMLAHMHE_TypeDefinitionIndex = 54709;

	class FOAMMLAHMHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + FOAMMLAHMHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAMMLAHMHE_EVALUATE_OFFSET))(this);
		}

	};
