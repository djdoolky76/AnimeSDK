#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define OADNEIPEAPH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBD1D680)
#define OADNEIPEAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1CF30)
#define OADNEIPEAPH_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xBD1D9B0)
#define OADNEIPEAPH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBD1CF40)
#define OADNEIPEAPH_TICK_OFFSET UNITYSDK_OFFSET(0xBD1D720)

	class OADNEIPEAPH : public ::HBPNHCICJGF
	{
	public:
		::System::Boolean DNACMCDJONF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + OADNEIPEAPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADNEIPEAPH_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADNEIPEAPH_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OADNEIPEAPH_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + OADNEIPEAPH_INOMGFMHLDO_OFFSET))(this);
		}

	};
