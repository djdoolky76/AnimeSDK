#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class DEKDEPEBHNC;
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define GCKIIDEGLHC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15977480)
#define GCKIIDEGLHC_CTOR_OFFSET UNITYSDK_OFFSET(0x15976940)
#define GCKIIDEGLHC_HDAJIALBCKM_OFFSET UNITYSDK_OFFSET(0x15976FC0)
#define GCKIIDEGLHC_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x159775A0)
#define GCKIIDEGLHC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15976950)
#define GCKIIDEGLHC_TICK_OFFSET UNITYSDK_OFFSET(0x159772D0)

inline static constexpr unsigned int GCKIIDEGLHC_TypeDefinitionIndex = 56263;

	class GCKIIDEGLHC : public ::HBPNHCICJGF
	{
	public:
		::DEKDEPEBHNC* KFJBHIEIKBJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + GCKIIDEGLHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKIIDEGLHC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKIIDEGLHC_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCKIIDEGLHC_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKIIDEGLHC_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void HDAJIALBCKM(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + GCKIIDEGLHC_HDAJIALBCKM_OFFSET))(this, a1);
		}

	};
