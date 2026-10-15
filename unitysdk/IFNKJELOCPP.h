#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckTargetHPCanBeDamage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define IFNKJELOCPP_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1B0C0)
#define IFNKJELOCPP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F1B0F0)
#define IFNKJELOCPP_FDBKADBMLDH_OFFSET UNITYSDK_OFFSET(0x15F1B2E0)

inline static constexpr unsigned int IFNKJELOCPP_TypeDefinitionIndex = 54509;

	class IFNKJELOCPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + IFNKJELOCPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNKJELOCPP_EVALUATE_OFFSET))(this);
		}

		::System::Boolean FDBKADBMLDH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IFNKJELOCPP_FDBKADBMLDH_OFFSET))(this, a1);
		}

	};
