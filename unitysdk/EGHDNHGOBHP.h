#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define EGHDNHGOBHP_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x14518F50)
#define EGHDNHGOBHP_CTOR_OFFSET UNITYSDK_OFFSET(0x14518B70)
#define EGHDNHGOBHP_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x14519120)
#define EGHDNHGOBHP_KEGEAPGPACO_OFFSET UNITYSDK_OFFSET(0x145191A0)
#define EGHDNHGOBHP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x14518B80)
#define EGHDNHGOBHP_PKMHJIAHIGG_OFFSET UNITYSDK_OFFSET(0x14519060)
#define EGHDNHGOBHP_TICK_OFFSET UNITYSDK_OFFSET(0x14518FE0)

	class EGHDNHGOBHP : public ::HBPNHCICJGF
	{
	public:
		::RPG::GameCore::GameEntity* JMHLJHCDPJJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void KEGEAPGPACO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_KEGEAPGPACO_OFFSET))(this, a1);
		}

		::System::Void PKMHJIAHIGG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGHDNHGOBHP_PKMHJIAHIGG_OFFSET))(this, a1);
		}

	};
