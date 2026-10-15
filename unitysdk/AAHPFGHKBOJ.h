#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOFBIDPBMI.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define AAHPFGHKBOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C5FA0)

inline static constexpr unsigned int AAHPFGHKBOJ_TypeDefinitionIndex = 56918;

	class AAHPFGHKBOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::PIOFBIDPBMI OFIDBAEPKLA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPFGHKBOJ_CTOR_OFFSET))(this);
		}

	};
