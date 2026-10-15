#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define AALKJGAHAHC_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0CE590)
#define AALKJGAHAHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CE5E0)

inline static constexpr unsigned int AALKJGAHAHC_TypeDefinitionIndex = 54837;

	class AALKJGAHAHC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KDKBMOMJIOH; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALKJGAHAHC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALKJGAHAHC_CLEAR_OFFSET))(this);
		}

	};
