#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareBattleEventID; }
namespace RPG::GameCore { class TaskContext; }

#define OJNFJHKILAG_CTOR_OFFSET UNITYSDK_OFFSET(0x194C95E0)
#define OJNFJHKILAG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x194C9610)

inline static constexpr unsigned int OJNFJHKILAG_TypeDefinitionIndex = 55681;

	class OJNFJHKILAG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + OJNFJHKILAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNFJHKILAG_EVALUATE_OFFSET))(this);
		}

	};
