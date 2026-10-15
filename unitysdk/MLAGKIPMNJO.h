#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MLAGKIPMNJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB99EEC0)

inline static constexpr unsigned int MLAGKIPMNJO_TypeDefinitionIndex = 54961;

	class MLAGKIPMNJO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::UIDamageTextType ONBNELOAGNN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAGKIPMNJO_CTOR_OFFSET))(this);
		}

	};
