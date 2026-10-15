#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define ODJAENILFKP_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xBD94080)
#define ODJAENILFKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD93FF0)
#define ODJAENILFKP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBD94000)
#define ODJAENILFKP_TICK_OFFSET UNITYSDK_OFFSET(0xBD940C0)

inline static constexpr unsigned int ODJAENILFKP_TypeDefinitionIndex = 56278;

	class ODJAENILFKP : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + ODJAENILFKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJAENILFKP_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODJAENILFKP_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODJAENILFKP_TICK_OFFSET))(this, a1);
		}

	};
