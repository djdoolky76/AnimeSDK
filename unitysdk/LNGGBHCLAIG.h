#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IOKPMIHIPGM.h"
class NHIPPCAPNPI;
class PFCHNCGHGNI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNGGBHCLAIG_AACNHMNELFI_OFFSET UNITYSDK_OFFSET(0xB7DD600)
#define LNGGBHCLAIG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7DDF30)
#define LNGGBHCLAIG_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7DD360)
#define LNGGBHCLAIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DDEF0)
#define LNGGBHCLAIG_GET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0xB7DDED0)
#define LNGGBHCLAIG_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0xB7DDD90)
#define LNGGBHCLAIG_NHEBCDDLGCO_OFFSET UNITYSDK_OFFSET(0xB7DDDB0)
#define LNGGBHCLAIG_NPMOELCNLAI_OFFSET UNITYSDK_OFFSET(0xB7DD910)
#define LNGGBHCLAIG_OGMNFCJBNIF_OFFSET UNITYSDK_OFFSET(0xB7DD7A0)
#define LNGGBHCLAIG_OIGGGIMOGKI_OFFSET UNITYSDK_OFFSET(0xB7DD3D0)
#define LNGGBHCLAIG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB7DD510)
#define LNGGBHCLAIG_PGKHBBDFGDO_OFFSET UNITYSDK_OFFSET(0xB7DD8C0)
#define LNGGBHCLAIG_SET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0xB7DDEE0)
#define LNGGBHCLAIG_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0xB7DDDA0)

inline static constexpr unsigned int LNGGBHCLAIG_TypeDefinitionIndex = 72194;

	class LNGGBHCLAIG : public ::System::Object
	{
	public:
		::NHIPPCAPNPI* APCENCANDNM; // 0x10
		::PFCHNCGHGNI* _AtmosphereConfig_k__BackingField; // 0x18
		::System::Boolean _ShowEffect_k__BackingField; // 0x20
		static ::PFCHNCGHGNI** StaticGet_HNJFINNACLG()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "LNGGBHCLAIG")->GetStaticField(0x6C800);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::PFCHNCGHGNI*>** StaticGet_JLJLOEGKLGJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::PFCHNCGHGNI*>**)UnitySDK::FromName("", "LNGGBHCLAIG")->GetStaticField(0x6C808);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGGBHCLAIG_CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_CLEAR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::IOKPMIHIPGM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOKPMIHIPGM))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_PAGKOAEOLKA_OFFSET))(this, a1);
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

		static ::System::Void NPMOELCNLAI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNGGBHCLAIG_NPMOELCNLAI_OFFSET))();
		}

		::System::Boolean get_ShowEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_GET_SHOWEFFECT_OFFSET))(this);
		}

		::System::Void set_ShowEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNGGBHCLAIG_SET_SHOWEFFECT_OFFSET))(this, a1);
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
