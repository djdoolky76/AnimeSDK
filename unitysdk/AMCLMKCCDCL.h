#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define AMCLMKCCDCL_CTOR_OFFSET UNITYSDK_OFFSET(0x155766D0)
#define AMCLMKCCDCL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15576700)
#define AMCLMKCCDCL_ILGKMKEEACE_OFFSET UNITYSDK_OFFSET(0x155769E0)
#define AMCLMKCCDCL_KCNBAIDPAON_OFFSET UNITYSDK_OFFSET(0x15576940)

inline static constexpr unsigned int AMCLMKCCDCL_TypeDefinitionIndex = 54679;

	class AMCLMKCCDCL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + AMCLMKCCDCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCLMKCCDCL_EVALUATE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KCNBAIDPAON(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + AMCLMKCCDCL_KCNBAIDPAON_OFFSET))(this, a1);
		}

		::System::Boolean ILGKMKEEACE(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AMCLMKCCDCL_ILGKMKEEACE_OFFSET))(this, a1, a2);
		}

	};
