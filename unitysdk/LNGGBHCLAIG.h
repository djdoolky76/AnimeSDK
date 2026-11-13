#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IOKPMIHIPGM.h"
class NHIPPCAPNPI;
class PFCHNCGHGNI;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }

#define LNGGBHCLAIG_AACNHMNELFI_OFFSET UNITYSDK_OFFSET(0x1A589040)
#define LNGGBHCLAIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A588D20)
#define LNGGBHCLAIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A589550)
#define LNGGBHCLAIG_FBBKOEIBGNM_OFFSET UNITYSDK_OFFSET(0x1A5893C0)
#define LNGGBHCLAIG_GET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x1A589530)
#define LNGGBHCLAIG_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x1A5893A0)
#define LNGGBHCLAIG_IJDECGEOHBM_OFFSET UNITYSDK_OFFSET(0x1A589300)
#define LNGGBHCLAIG_NHEBCDDLGCO_OFFSET UNITYSDK_OFFSET(0x1A589410)
#define LNGGBHCLAIG_OGMNFCJBNIF_OFFSET UNITYSDK_OFFSET(0x1A5891E0)
#define LNGGBHCLAIG_OIGGGIMOGKI_OFFSET UNITYSDK_OFFSET(0x1A588DA0)
#define LNGGBHCLAIG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A588EE0)
#define LNGGBHCLAIG_PGKHBBDFGDO_OFFSET UNITYSDK_OFFSET(0x1A589250)
#define LNGGBHCLAIG_PHMIHONCBCP_OFFSET UNITYSDK_OFFSET(0x1A5892A0)
#define LNGGBHCLAIG_SET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x1A589540)
#define LNGGBHCLAIG_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x1A5893B0)

inline static constexpr unsigned int LNGGBHCLAIG_TypeDefinitionIndex = 74255;

	class LNGGBHCLAIG : public ::System::Object
	{
	public:
		::RPG::Client::BattleAvatarNihiluxCustomUIData* EHNOGCBHACN; // 0x10
		::NHIPPCAPNPI* APCENCANDNM; // 0x18
		::PFCHNCGHGNI* _AtmosphereConfig_k__BackingField; // 0x20
		::System::Boolean _ShowEffect_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_CLEAR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::IOKPMIHIPGM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKPMIHIPGM))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean PHMIHONCBCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_PHMIHONCBCP_OFFSET))(this);
		}

		::System::Void IJDECGEOHBM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_IJDECGEOHBM_OFFSET))(this, a1);
		}

		::System::Void OIGGGIMOGKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_OIGGGIMOGKI_OFFSET))(this);
		}

		::System::Void AACNHMNELFI(::IOKPMIHIPGM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKPMIHIPGM))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_AACNHMNELFI_OFFSET))(this, a1);
		}

		::System::Void PGKHBBDFGDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_PGKHBBDFGDO_OFFSET))(this);
		}

		::PFCHNCGHGNI* OGMNFCJBNIF(::RPG::GameCore::ElationTimeAtmosphereType a1)
		{
			return ((::PFCHNCGHGNI*(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_OGMNFCJBNIF_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_GET_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void set_ShowEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_SET_SHOWEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean FBBKOEIBGNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_FBBKOEIBGNM_OFFSET))(this);
		}

		::System::Int32 NHEBCDDLGCO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_NHEBCDDLGCO_OFFSET))(this);
		}

		::PFCHNCGHGNI* get_AtmosphereConfig()
		{
			return ((::PFCHNCGHGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_GET_ATMOSPHERECONFIG_OFFSET))(this);
		}

		::System::Void set_AtmosphereConfig(::PFCHNCGHGNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFCHNCGHGNI*))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_SET_ATMOSPHERECONFIG_OFFSET))(this, a1);
		}

	};
