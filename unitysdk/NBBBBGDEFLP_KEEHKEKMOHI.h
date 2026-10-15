#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetComponentAssetAnimStateConfig; }

#define NBBBBGDEFLP_KEEHKEKMOHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBABCEB0)

	class NBBBBGDEFLP_KEEHKEKMOHI : public ::System::Object
	{
	public:
		::RPG::GameCore::SetComponentAssetAnimStateConfig* EABKOHGCHFP; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Single GFCFHLJEHMC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_KEEHKEKMOHI_CTOR_OFFSET))(this);
		}

	};
