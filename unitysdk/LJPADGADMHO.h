#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ByCanPlanetFesLevelUp; }
namespace RPG::GameCore { class TaskContext; }

#define LJPADGADMHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB71D650)
#define LJPADGADMHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB71D680)

inline static constexpr unsigned int LJPADGADMHO_TypeDefinitionIndex = 57965;

	class LJPADGADMHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + LJPADGADMHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPADGADMHO_EVALUATE_OFFSET))(this);
		}

	};
