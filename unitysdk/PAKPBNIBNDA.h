#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define PAKPBNIBNDA_AKJFCBMOMLH_OFFSET UNITYSDK_OFFSET(0xC8D4600)
#define PAKPBNIBNDA_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC8D48A0)
#define PAKPBNIBNDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC8D4330)
#define PAKPBNIBNDA_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0xC8D49A0)
#define PAKPBNIBNDA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC8D4350)
#define PAKPBNIBNDA_NLHBOJHNMHE_OFFSET UNITYSDK_OFFSET(0xC8D4580)
#define PAKPBNIBNDA_TICK_OFFSET UNITYSDK_OFFSET(0xC8D48E0)

inline static constexpr unsigned int PAKPBNIBNDA_TypeDefinitionIndex = 57471;

	class PAKPBNIBNDA : public ::HBPNHCICJGF
	{
	public:
		::System::Boolean KEMINEBNCPL; // 0x28
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void AKJFCBMOMLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_AKJFCBMOMLH_OFFSET))(this);
		}

		::System::Boolean NLHBOJHNMHE(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAKPBNIBNDA_NLHBOJHNMHE_OFFSET))(this, a1);
		}

	};
