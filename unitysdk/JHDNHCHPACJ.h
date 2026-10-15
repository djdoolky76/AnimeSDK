#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define JHDNHCHPACJ_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB1A5970)
#define JHDNHCHPACJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A56F0)
#define JHDNHCHPACJ_EBENFAJPCNL_OFFSET UNITYSDK_OFFSET(0xB1A58B0)
#define JHDNHCHPACJ_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xB1A5A60)
#define JHDNHCHPACJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB1A5700)
#define JHDNHCHPACJ_TICK_OFFSET UNITYSDK_OFFSET(0xB1A59E0)

inline static constexpr unsigned int JHDNHCHPACJ_TypeDefinitionIndex = 56268;

	class JHDNHCHPACJ : public ::HBPNHCICJGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + JHDNHCHPACJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDNHCHPACJ_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDNHCHPACJ_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHDNHCHPACJ_TICK_OFFSET))(this, a1);
		}

		::System::Void EBENFAJPCNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDNHCHPACJ_EBENFAJPCNL_OFFSET))(this);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDNHCHPACJ_INOMGFMHLDO_OFFSET))(this);
		}

	};
