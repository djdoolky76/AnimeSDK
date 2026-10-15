#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define IDHGIEDPPHG_CELHHADFIIH_OFFSET UNITYSDK_OFFSET(0x15ED3DF0)
#define IDHGIEDPPHG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15ED3EE0)
#define IDHGIEDPPHG_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED3A60)
#define IDHGIEDPPHG_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x15ED3F90)
#define IDHGIEDPPHG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15ED3A70)
#define IDHGIEDPPHG_TICK_OFFSET UNITYSDK_OFFSET(0x15ED3F20)

	class IDHGIEDPPHG : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + IDHGIEDPPHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHGIEDPPHG_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHGIEDPPHG_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDHGIEDPPHG_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHGIEDPPHG_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void CELHHADFIIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHGIEDPPHG_CELHHADFIIH_OFFSET))(this);
		}

	};
