#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
class EKFMIDBJDIA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CFMIJBLGPFA_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xCC4EFA0)
#define CFMIJBLGPFA_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4EBF0)
#define CFMIJBLGPFA_EBENFAJPCNL_OFFSET UNITYSDK_OFFSET(0xCC4EED0)
#define CFMIJBLGPFA_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xCC4F060)
#define CFMIJBLGPFA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xCC4EC00)
#define CFMIJBLGPFA_NPHDJAKLKJF_OFFSET UNITYSDK_OFFSET(0xCC4F0E0)
#define CFMIJBLGPFA_TICK_OFFSET UNITYSDK_OFFSET(0xCC4EFE0)

inline static constexpr unsigned int CFMIJBLGPFA_TypeDefinitionIndex = 56265;

	class CFMIJBLGPFA : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void EBENFAJPCNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_EBENFAJPCNL_OFFSET))(this);
		}

		::System::Void NPHDJAKLKJF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CFMIJBLGPFA_NPHDJAKLKJF_OFFSET))(this, a1);
		}

	};
