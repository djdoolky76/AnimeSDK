#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
namespace RPG::GameCore { class ByHasStanceWeakPreview; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JLEFGHCFKHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2368F0)
#define JLEFGHCFKHB_DCFCCIFJGNB_OFFSET UNITYSDK_OFFSET(0xB236D10)
#define JLEFGHCFKHB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB236940)

inline static constexpr unsigned int JLEFGHCFKHB_TypeDefinitionIndex = 54622;

	class JLEFGHCFKHB
	{
	public:
		::System::Boolean IPJHKHHBKII; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 CCBFKHOIPPF; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + JLEFGHCFKHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEFGHCFKHB_EVALUATE_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType DCFCCIFJGNB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLEFGHCFKHB_DCFCCIFJGNB_OFFSET))(this, a1);
		}

	};
