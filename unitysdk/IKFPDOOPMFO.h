#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }

#define IKFPDOOPMFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1647AF50)
#define IKFPDOOPMFO_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0x1647B1C0)
#define IKFPDOOPMFO_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0x1647B0C0)
#define IKFPDOOPMFO_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x1647AF70)
#define IKFPDOOPMFO_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0x1647B300)
#define IKFPDOOPMFO_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0x1647B2C0)
#define IKFPDOOPMFO_KGMDNELHODN_OFFSET UNITYSDK_OFFSET(0x1647B350)

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
