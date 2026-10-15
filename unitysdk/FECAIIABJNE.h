#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsElfRestaurantRecipeCooked; }
namespace RPG::GameCore { class TaskContext; }

#define FECAIIABJNE_CTOR_OFFSET UNITYSDK_OFFSET(0x156E47C0)
#define FECAIIABJNE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156E4800)

inline static constexpr unsigned int FECAIIABJNE_TypeDefinitionIndex = 54653;

	class FECAIIABJNE
	{
	public:
		::System::UInt32 LNIMIHKEOII; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + FECAIIABJNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FECAIIABJNE_EVALUATE_OFFSET))(this);
		}

	};
