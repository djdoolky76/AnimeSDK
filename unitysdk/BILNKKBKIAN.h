#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BILNKKBKIAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7861E0)

inline static constexpr unsigned int BILNKKBKIAN_TypeDefinitionIndex = 71573;

	class BILNKKBKIAN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILNKKBKIAN_CTOR_OFFSET))(this);
		}

	};
