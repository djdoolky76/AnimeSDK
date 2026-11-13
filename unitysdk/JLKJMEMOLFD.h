#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"
class DCHFGBPMKDI;
class GFHCKBHCNDF;
class PLHAEBMKIFA;

#define JLKJMEMOLFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A095630)
#define JLKJMEMOLFD_GET_CLIENTAPI_OFFSET UNITYSDK_OFFSET(0x1A0956E0)
#define JLKJMEMOLFD_GET_COOPBOSSLEVELMODE_OFFSET UNITYSDK_OFFSET(0x1A0956F0)
#define JLKJMEMOLFD_GET_FIGHTTRANSPORT_OFFSET UNITYSDK_OFFSET(0x1A0956D0)
#define JLKJMEMOLFD_GET_INITINFO_OFFSET UNITYSDK_OFFSET(0x1A0956C0)

inline static constexpr unsigned int JLKJMEMOLFD_TypeDefinitionIndex = 61706;

	class JLKJMEMOLFD : public ::System::Object
	{
	public:
		::PLHAEBMKIFA* _ClientApi_k__BackingField; // 0x10
		::DCHFGBPMKDI* _FightTransport_k__BackingField; // 0x18
		::GFHCKBHCNDF* _InitInfo_k__BackingField; // 0x20
		::RPG::GameCore::PetMarbleLevelMode _CoopBossLevelMode_k__BackingField; // 0x28
		::System::Void _ctor(::GFHCKBHCNDF* a1, ::DCHFGBPMKDI* a2, ::PLHAEBMKIFA* a3, ::RPG::GameCore::PetMarbleLevelMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::DCHFGBPMKDI*, ::PLHAEBMKIFA*, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + JLKJMEMOLFD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::GFHCKBHCNDF* get_InitInfo()
		{
			return ((::GFHCKBHCNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKJMEMOLFD_GET_INITINFO_OFFSET))(this);
		}

		::DCHFGBPMKDI* get_FightTransport()
		{
			return ((::DCHFGBPMKDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKJMEMOLFD_GET_FIGHTTRANSPORT_OFFSET))(this);
		}

		::PLHAEBMKIFA* get_ClientApi()
		{
			return ((::PLHAEBMKIFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKJMEMOLFD_GET_CLIENTAPI_OFFSET))(this);
		}

		::RPG::GameCore::PetMarbleLevelMode get_CoopBossLevelMode()
		{
			return ((::RPG::GameCore::PetMarbleLevelMode(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKJMEMOLFD_GET_COOPBOSSLEVELMODE_OFFSET))(this);
		}

	};
