#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IOKPMIHIPGM.h"
class NHIPPCAPNPI;
class PFCHNCGHGNI;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }

#define LNGGBHCLAIG_AACNHMNELFI_OFFSET UNITYSDK_OFFSET(0xC03B0F0)
#define LNGGBHCLAIG_CLEAR_OFFSET UNITYSDK_OFFSET(0xC03ADD0)
#define LNGGBHCLAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC03B600)
#define LNGGBHCLAIG_FBBKOEIBGNM_OFFSET UNITYSDK_OFFSET(0xC03B470)
#define LNGGBHCLAIG_GET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0xC03B5E0)
#define LNGGBHCLAIG_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0xC03B450)
#define LNGGBHCLAIG_IJDECGEOHBM_OFFSET UNITYSDK_OFFSET(0xC03B3B0)
#define LNGGBHCLAIG_NHEBCDDLGCO_OFFSET UNITYSDK_OFFSET(0xC03B4C0)
#define LNGGBHCLAIG_OGMNFCJBNIF_OFFSET UNITYSDK_OFFSET(0xC03B290)
#define LNGGBHCLAIG_OIGGGIMOGKI_OFFSET UNITYSDK_OFFSET(0xC03AE50)
#define LNGGBHCLAIG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC03AF90)
#define LNGGBHCLAIG_PGKHBBDFGDO_OFFSET UNITYSDK_OFFSET(0xC03B300)
#define LNGGBHCLAIG_PHMIHONCBCP_OFFSET UNITYSDK_OFFSET(0xC03B350)
#define LNGGBHCLAIG_SET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0xC03B5F0)
#define LNGGBHCLAIG_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0xC03B460)

inline static constexpr unsigned int LNGGBHCLAIG_TypeDefinitionIndex = 74256;

	class LNGGBHCLAIG : public ::System::Object
	{
	public:
		::NHIPPCAPNPI* APCENCANDNM; // 0x10
		::RPG::Client::BattleAvatarNihiluxCustomUIData* EHNOGCBHACN; // 0x18
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
