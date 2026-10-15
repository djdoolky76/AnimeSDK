#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define MFJOOHDJIIP_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB904560)
#define MFJOOHDJIIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB904410)
#define MFJOOHDJIIP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB904420)
#define MFJOOHDJIIP_TICK_OFFSET UNITYSDK_OFFSET(0xB9045A0)

	class MFJOOHDJIIP : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + MFJOOHDJIIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJOOHDJIIP_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJOOHDJIIP_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFJOOHDJIIP_TICK_OFFSET))(this, a1);
		}

	};
