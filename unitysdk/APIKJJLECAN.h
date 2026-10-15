#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInCharmAction; }
namespace RPG::GameCore { class TaskContext; }

#define APIKJJLECAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9F880)
#define APIKJJLECAN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B9F8B0)

inline static constexpr unsigned int APIKJJLECAN_TypeDefinitionIndex = 54665;

	class APIKJJLECAN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + APIKJJLECAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APIKJJLECAN_EVALUATE_OFFSET))(this);
		}

	};
