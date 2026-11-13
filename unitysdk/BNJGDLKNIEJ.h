#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
class AJOPMLKHAGC;
class BNJGDLKNIEJ;
class CPJNHBCIMGA;
class FNKIAFBAMEE;
class GLOCAENEKMK;
class OBJANKHLNGO;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ChenLingFesGameInstance; }

#define BNJGDLKNIEJ_BCHGDJDOAEC_OFFSET UNITYSDK_OFFSET(0x1A76F6B0)
#define BNJGDLKNIEJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A76F520)
#define BNJGDLKNIEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A76F5E0)
#define BNJGDLKNIEJ_FOEGMPIAPDG_OFFSET UNITYSDK_OFFSET(0x1A76F8C0)
#define BNJGDLKNIEJ_GET_PHASEMANAGER_OFFSET UNITYSDK_OFFSET(0x1A76F690)
#define BNJGDLKNIEJ_JGMFFLNAAPC_OFFSET UNITYSDK_OFFSET(0x1A76F930)
#define BNJGDLKNIEJ_OCMLGEGEONE_OFFSET UNITYSDK_OFFSET(0x1A76F730)
#define BNJGDLKNIEJ_OPBJDFIMEJN_OFFSET UNITYSDK_OFFSET(0x1A76F860)
#define BNJGDLKNIEJ_SET_PHASEMANAGER_OFFSET UNITYSDK_OFFSET(0x1A76F6A0)
#define BNJGDLKNIEJ__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A76F640)

inline static constexpr unsigned int BNJGDLKNIEJ_TypeDefinitionIndex = 80457;

	class BNJGDLKNIEJ : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::CPJNHBCIMGA* _PhaseManager_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_CTOR_OFFSET))(this, a1);
		}

		static ::BNJGDLKNIEJ* BPLPBPMEODA(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::BNJGDLKNIEJ*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ__ONDESTROYED_OFFSET))(this);
		}

		::CPJNHBCIMGA* get_PhaseManager()
		{
			return ((::CPJNHBCIMGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_GET_PHASEMANAGER_OFFSET))(this);
		}

		::System::Void set_PhaseManager(::CPJNHBCIMGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPJNHBCIMGA*))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_SET_PHASEMANAGER_OFFSET))(this, a1);
		}

		::GLOCAENEKMK* BCHGDJDOAEC()
		{
			return ((::GLOCAENEKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_BCHGDJDOAEC_OFFSET))(this);
		}

		::RPG::Client::ChenLingFesGameInstance* OCMLGEGEONE()
		{
			return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_OCMLGEGEONE_OFFSET))(this);
		}

		::AJOPMLKHAGC* OPBJDFIMEJN()
		{
			return ((::AJOPMLKHAGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_OPBJDFIMEJN_OFFSET))(this);
		}

		::OBJANKHLNGO* FOEGMPIAPDG()
		{
			return ((::OBJANKHLNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_FOEGMPIAPDG_OFFSET))(this);
		}

		::FNKIAFBAMEE* JGMFFLNAAPC()
		{
			return ((::FNKIAFBAMEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNJGDLKNIEJ_JGMFFLNAAPC_OFFSET))(this);
		}

	};
