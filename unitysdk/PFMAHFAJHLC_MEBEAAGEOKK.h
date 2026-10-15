#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define PFMAHFAJHLC_MEBEAAGEOKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2179A0)

	class PFMAHFAJHLC_MEBEAAGEOKK : public ::System::Object
	{
	public:
		::System::String* OAFHCHJINFA; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Boolean GNDABBKHBIG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMAHFAJHLC_MEBEAAGEOKK_CTOR_OFFSET))(this);
		}

	};
