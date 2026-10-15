#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

#define MLIDFKKCBNA_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xB9A89F0)
#define MLIDFKKCBNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A8C00)
#define MLIDFKKCBNA_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xB9A8A30)
#define MLIDFKKCBNA_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xB9A89B0)
#define MLIDFKKCBNA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9A8950)

inline static constexpr unsigned int MLIDFKKCBNA_TypeDefinitionIndex = 61052;

	class MLIDFKKCBNA : public ::System::Object
	{
	public:
		::System::Boolean BDNFDOCHGHP; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::GamePhaseType CIKCMHJJANL; // 0x14
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
