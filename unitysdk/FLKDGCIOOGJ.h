#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define FLKDGCIOOGJ_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15836340)
#define FLKDGCIOOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x158361C0)
#define FLKDGCIOOGJ_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x158363F0)
#define FLKDGCIOOGJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x158361D0)
#define FLKDGCIOOGJ_TICK_OFFSET UNITYSDK_OFFSET(0x15836380)

	class FLKDGCIOOGJ : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + FLKDGCIOOGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKDGCIOOGJ_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKDGCIOOGJ_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLKDGCIOOGJ_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKDGCIOOGJ_INOMGFMHLDO_OFFSET))(this);
		}

	};
