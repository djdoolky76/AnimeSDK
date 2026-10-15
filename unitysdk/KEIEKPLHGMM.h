#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceBGMType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventureAudioManager; }
namespace System { class String; }

#define KEIEKPLHGMM_BPILMHBJPEK_OFFSET UNITYSDK_OFFSET(0xB37B4E0)
#define KEIEKPLHGMM_CDKDEGGKEAG_OFFSET UNITYSDK_OFFSET(0xB37B1D0)
#define KEIEKPLHGMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB37B0F0)
#define KEIEKPLHGMM_FHDMKKAEGNC_OFFSET UNITYSDK_OFFSET(0xB37B6B0)
#define KEIEKPLHGMM_FKHEABDEDJK_OFFSET UNITYSDK_OFFSET(0xB37B3D0)
#define KEIEKPLHGMM_GBAAOBKBJGI_OFFSET UNITYSDK_OFFSET(0xB37B490)
#define KEIEKPLHGMM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB37B150)
#define KEIEKPLHGMM_IBMOHCNJNEO_OFFSET UNITYSDK_OFFSET(0xB37B220)
#define KEIEKPLHGMM_IPNEIOEJEOC_OFFSET UNITYSDK_OFFSET(0xB37B2C0)
#define KEIEKPLHGMM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB37B100)
#define KEIEKPLHGMM_LOGDICCEOHH_OFFSET UNITYSDK_OFFSET(0xB37B580)

	class KEIEKPLHGMM : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceBGMType AAJKPKGPOPJ; // 0x10
		::System::Int32 JDNFGGEJJPE; // 0x14
		// static const ::System::String* BJDLCABFCLK; // 0x0
		// static const ::System::String* GLOCOOCFFNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void IBMOHCNJNEO(::RPG::Client::CakeRaceBGMType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBGMType))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_IBMOHCNJNEO_OFFSET))(this, a1);
		}

		::System::Void FKHEABDEDJK(::RPG::Client::CakeRaceBGMType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBGMType, ::System::Boolean))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_FKHEABDEDJK_OFFSET))(this, a1, a2);
		}

		::System::Void CDKDEGGKEAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_CDKDEGGKEAG_OFFSET))(this);
		}

		::System::Void GBAAOBKBJGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_GBAAOBKBJGI_OFFSET))(this);
		}

		::System::Void IPNEIOEJEOC(::RPG::Client::CakeRaceBGMType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBGMType))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_IPNEIOEJEOC_OFFSET))(this, a1);
		}

		::System::Void BPILMHBJPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_BPILMHBJPEK_OFFSET))(this);
		}

		::RPG::Client::AdventureAudioManager* LOGDICCEOHH()
		{
			return ((::RPG::Client::AdventureAudioManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_LOGDICCEOHH_OFFSET))(this);
		}

		::System::String* FHDMKKAEGNC(::RPG::Client::CakeRaceBGMType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::CakeRaceBGMType))((::PBYTE)hIl2Cpp + KEIEKPLHGMM_FHDMKKAEGNC_OFFSET))(this, a1);
		}

	};
