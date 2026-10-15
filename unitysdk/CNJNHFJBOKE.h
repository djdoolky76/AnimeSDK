#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CNJNHFJBOKE_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xDA50120)
#define CNJNHFJBOKE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4FC20)
#define CNJNHFJBOKE_EBENFAJPCNL_OFFSET UNITYSDK_OFFSET(0xDA4FF10)
#define CNJNHFJBOKE_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xDA501E0)
#define CNJNHFJBOKE_KHKBPJPKALO_OFFSET UNITYSDK_OFFSET(0xDA4FCC0)
#define CNJNHFJBOKE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xDA4FC30)
#define CNJNHFJBOKE_TICK_OFFSET UNITYSDK_OFFSET(0xDA50160)

inline static constexpr unsigned int CNJNHFJBOKE_TypeDefinitionIndex = 56269;

	class CNJNHFJBOKE : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_INOMGFMHLDO_OFFSET))(this);
		}

		::HOIMPNMCBEI KHKBPJPKALO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_KHKBPJPKALO_OFFSET))(this);
		}

		::System::Void EBENFAJPCNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJNHFJBOKE_EBENFAJPCNL_OFFSET))(this);
		}

	};
