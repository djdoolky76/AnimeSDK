#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define GKLKDBCKEPC_BCENBAFOPOO_OFFSET UNITYSDK_OFFSET(0x15AA1D70)
#define GKLKDBCKEPC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15AA1E90)
#define GKLKDBCKEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA1840)
#define GKLKDBCKEPC_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x15AA2180)
#define GKLKDBCKEPC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15AA1850)
#define GKLKDBCKEPC_KMLOOBNFFIE_OFFSET UNITYSDK_OFFSET(0x15AA1DD0)
#define GKLKDBCKEPC_TICK_OFFSET UNITYSDK_OFFSET(0x15AA2000)

inline static constexpr unsigned int GKLKDBCKEPC_TypeDefinitionIndex = 56275;

	class GKLKDBCKEPC : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void BCENBAFOPOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_BCENBAFOPOO_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void KMLOOBNFFIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLKDBCKEPC_KMLOOBNFFIE_OFFSET))(this);
		}

	};
