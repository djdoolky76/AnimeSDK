#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }

#define NGJHKDALOOA_BBMMBLEKPAN_OFFSET UNITYSDK_OFFSET(0xC485F30)
#define NGJHKDALOOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC485CC0)
#define NGJHKDALOOA_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0xC485E30)
#define NGJHKDALOOA_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xC485CE0)
#define NGJHKDALOOA_HNIHDGBGBPH_OFFSET UNITYSDK_OFFSET(0xC486030)
#define NGJHKDALOOA_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0xC4860B0)
#define NGJHKDALOOA_INAKJOJAFJP_OFFSET UNITYSDK_OFFSET(0xC486110)
#define NGJHKDALOOA_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0xC486070)

inline static constexpr unsigned int NGJHKDALOOA_TypeDefinitionIndex = 62558;

	class NGJHKDALOOA : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* MDKAJPJNKJE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + NGJHKDALOOA_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void BBMMBLEKPAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_BBMMBLEKPAN_OFFSET))(this);
		}

		::System::Void HNIHDGBGBPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_HNIHDGBGBPH_OFFSET))(this);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_IDLEKLJHINH_OFFSET))(this);
		}

		::RPG::Client::TeamData* INAKJOJAFJP()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_INAKJOJAFJP_OFFSET))(this);
		}

		::System::Void FFBEGKBEJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJHKDALOOA_FFBEGKBEJDK_OFFSET))(this);
		}

	};
