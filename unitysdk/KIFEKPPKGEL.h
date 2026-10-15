#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSoundEventInCD; }
namespace RPG::GameCore { class TaskContext; }

#define KIFEKPPKGEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB417840)
#define KIFEKPPKGEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB417870)

inline static constexpr unsigned int KIFEKPPKGEL_TypeDefinitionIndex = 52592;

	class KIFEKPPKGEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + KIFEKPPKGEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFEKPPKGEL_EVALUATE_OFFSET))(this);
		}

	};
