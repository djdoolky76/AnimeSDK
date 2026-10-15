#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define IGDKNGKOLNB_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x16409F60)
#define IGDKNGKOLNB_CTOR_OFFSET UNITYSDK_OFFSET(0x16409D10)
#define IGDKNGKOLNB_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x1640A010)
#define IGDKNGKOLNB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x16409D20)
#define IGDKNGKOLNB_TICK_OFFSET UNITYSDK_OFFSET(0x16409FA0)

	class IGDKNGKOLNB : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + IGDKNGKOLNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDKNGKOLNB_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDKNGKOLNB_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGDKNGKOLNB_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDKNGKOLNB_INOMGFMHLDO_OFFSET))(this);
		}

	};
