#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

#define MLIDFKKCBNA_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xB9AE890)
#define MLIDFKKCBNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AEAA0)
#define MLIDFKKCBNA_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xB9AE8D0)
#define MLIDFKKCBNA_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xB9AE850)
#define MLIDFKKCBNA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9AE7F0)

	class MLIDFKKCBNA : public ::System::Object
	{
	public:
		::RPG::Client::GamePhaseType CIKCMHJJANL; // 0x10
		::System::Boolean BDNFDOCHGHP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIDFKKCBNA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::GamePhaseType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Boolean))((::PBYTE)hIl2Cpp + MLIDFKKCBNA_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JMKLBMEHDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIDFKKCBNA_JMKLBMEHDCG_OFFSET))(this);
		}

		::System::Void BNDCKKCCAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIDFKKCBNA_BNDCKKCCAGG_OFFSET))(this);
		}

		::System::Boolean GLOADGNOLGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLIDFKKCBNA_GLOADGNOLGE_OFFSET))(this);
		}

	};
