#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }

#define IKFPDOOPMFO_CTOR_OFFSET UNITYSDK_OFFSET(0x16488670)
#define IKFPDOOPMFO_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0x164888E0)
#define IKFPDOOPMFO_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0x164887E0)
#define IKFPDOOPMFO_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x16488690)
#define IKFPDOOPMFO_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0x16488A20)
#define IKFPDOOPMFO_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0x164889E0)
#define IKFPDOOPMFO_KGMDNELHODN_OFFSET UNITYSDK_OFFSET(0x16488A70)

inline static constexpr unsigned int IKFPDOOPMFO_TypeDefinitionIndex = 61188;

	class IKFPDOOPMFO : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* NDMLGIAKPKM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_IDLEKLJHINH_OFFSET))(this);
		}

		::RPG::Client::TeamData* KGMDNELHODN()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_KGMDNELHODN_OFFSET))(this);
		}

		::System::Void FFBEGKBEJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPDOOPMFO_FFBEGKBEJDK_OFFSET))(this);
		}

	};
