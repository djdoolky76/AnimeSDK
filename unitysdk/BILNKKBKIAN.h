#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BILNKKBKIAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC4060)

inline static constexpr unsigned int BILNKKBKIAN_TypeDefinitionIndex = 73559;

	class BILNKKBKIAN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILNKKBKIAN_CTOR_OFFSET))(this);
		}

	};
