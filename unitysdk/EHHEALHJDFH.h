#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }

#define EHHEALHJDFH_CTOR_OFFSET UNITYSDK_OFFSET(0x163A5E70)
#define EHHEALHJDFH_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0x163A60E0)
#define EHHEALHJDFH_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x163A5E80)
#define EHHEALHJDFH_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0x163A64B0)
#define EHHEALHJDFH_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0x163A6220)
#define EHHEALHJDFH_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0x163A61E0)
#define EHHEALHJDFH_KGMDNELHODN_OFFSET UNITYSDK_OFFSET(0x163A6270)

inline static constexpr unsigned int EHHEALHJDFH_TypeDefinitionIndex = 62584;

	class EHHEALHJDFH : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* NLMFPDFOBAP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHEALHJDFH_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + EHHEALHJDFH_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHEALHJDFH_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHEALHJDFH_IDLEKLJHINH_OFFSET))(this);
		}

		::System::Void FFBEGKBEJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHEALHJDFH_FFBEGKBEJDK_OFFSET))(this);
		}

		::RPG::Client::TeamData* KGMDNELHODN()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHEALHJDFH_KGMDNELHODN_OFFSET))(this);
		}

		::System::Void HILHCKLBJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHEALHJDFH_HILHCKLBJOM_OFFSET))(this);
		}

	};
