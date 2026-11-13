#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsPropLockable; }
namespace RPG::GameCore { class TaskContext; }

#define HOODMOGDPOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2B100)
#define HOODMOGDPOG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AF2B130)

inline static constexpr unsigned int HOODMOGDPOG_TypeDefinitionIndex = 53708;

	class HOODMOGDPOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + HOODMOGDPOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOODMOGDPOG_EVALUATE_OFFSET))(this);
		}

	};
