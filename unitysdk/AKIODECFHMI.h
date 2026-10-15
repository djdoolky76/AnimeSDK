#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define AKIODECFHMI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD4A50)

	class AKIODECFHMI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::FloatMessageType GBJBHFGLNDP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIODECFHMI_CTOR_OFFSET))(this);
		}

	};
