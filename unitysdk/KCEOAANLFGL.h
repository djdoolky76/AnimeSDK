#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }

#define KCEOAANLFGL_CECILEJDJNA_OFFSET UNITYSDK_OFFSET(0xB332680)
#define KCEOAANLFGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB332040)
#define KCEOAANLFGL_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0xB3322C0)
#define KCEOAANLFGL_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0xB3321C0)
#define KCEOAANLFGL_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xB332060)
#define KCEOAANLFGL_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0xB332400)
#define KCEOAANLFGL_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0xB3323C0)
#define KCEOAANLFGL_KGMDNELHODN_OFFSET UNITYSDK_OFFSET(0xB332450)

inline static constexpr unsigned int KCEOAANLFGL_TypeDefinitionIndex = 61198;

	class KCEOAANLFGL : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* NLMFPDFOBAP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + KCEOAANLFGL_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_IDLEKLJHINH_OFFSET))(this);
		}

		::System::Void CECILEJDJNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_CECILEJDJNA_OFFSET))(this);
		}

		::RPG::Client::TeamData* KGMDNELHODN()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_KGMDNELHODN_OFFSET))(this);
		}

		::System::Void FFBEGKBEJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOAANLFGL_FFBEGKBEJDK_OFFSET))(this);
		}

	};
