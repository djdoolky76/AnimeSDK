#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define HCAAKJLECEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C15390)

	class HCAAKJLECEH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::Boolean GEOPPFCKACN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAAKJLECEH_CTOR_OFFSET))(this);
		}

	};
