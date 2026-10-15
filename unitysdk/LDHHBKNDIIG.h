#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }

#define LDHHBKNDIIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6238E0)
#define LDHHBKNDIIG_DMEMABFLGGI_OFFSET UNITYSDK_OFFSET(0xB623BF0)
#define LDHHBKNDIIG_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0xB623A50)
#define LDHHBKNDIIG_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xB623900)
#define LDHHBKNDIIG_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0xB623B90)
#define LDHHBKNDIIG_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0xB623B50)

	class LDHHBKNDIIG : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* BOLLAIOPGKH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHHBKNDIIG_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + LDHHBKNDIIG_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHHBKNDIIG_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHHBKNDIIG_IDLEKLJHINH_OFFSET))(this);
		}

		::System::Void DMEMABFLGGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHHBKNDIIG_DMEMABFLGGI_OFFSET))(this);
		}

		::System::Void FFBEGKBEJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHHBKNDIIG_FFBEGKBEJDK_OFFSET))(this);
		}

	};
