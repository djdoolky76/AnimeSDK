#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define KKBKKOEIEEG_KAAEHJBPLFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B5010)

	class KKBKKOEIEEG_KAAEHJBPLFM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBKKOEIEEG_KAAEHJBPLFM_CTOR_OFFSET))(this);
		}

	};
