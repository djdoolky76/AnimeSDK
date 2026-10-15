#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
namespace RPG::GameCore { class GameEntity; }

#define NDPCELNOALL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4FB90)
#define NDPCELNOALL_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xBB4FBA0)

inline static constexpr unsigned int NDPCELNOALL_TypeDefinitionIndex = 57041;

	class NDPCELNOALL : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x68
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NDPCELNOALL_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPCELNOALL_GET_FLAG_OFFSET))(this);
		}

	};
