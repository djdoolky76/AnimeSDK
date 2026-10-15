#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define OKDEEDBBFLO_HJLPKAEFPKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBED4380)

	class OKDEEDBBFLO_HJLPKAEFPKP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Boolean NKELNPKIIHF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDEEDBBFLO_HJLPKAEFPKP_CTOR_OFFSET))(this);
		}

	};
