#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define ACLIKAFJJIF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB124060)
#define ACLIKAFJJIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB123EE0)
#define ACLIKAFJJIF_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xB124110)
#define ACLIKAFJJIF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB123EF0)
#define ACLIKAFJJIF_TICK_OFFSET UNITYSDK_OFFSET(0xB1240A0)

inline static constexpr unsigned int ACLIKAFJJIF_TypeDefinitionIndex = 56260;

	class ACLIKAFJJIF : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + ACLIKAFJJIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLIKAFJJIF_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLIKAFJJIF_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACLIKAFJJIF_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLIKAFJJIF_INOMGFMHLDO_OFFSET))(this);
		}

	};
