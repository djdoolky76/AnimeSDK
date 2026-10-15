#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDCHAKILGCN.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define KBJPMKNHBBI_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xB309BC0)
#define KBJPMKNHBBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB30A090)
#define KBJPMKNHBBI_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB30A080)
#define KBJPMKNHBBI_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB3086E0)
#define KBJPMKNHBBI_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xB309B30)
#define KBJPMKNHBBI_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0xB308BE0)
#define KBJPMKNHBBI_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0xB3083F0)
#define KBJPMKNHBBI_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xB308CE0)
#define KBJPMKNHBBI_HGCDKAJKCIP_OFFSET UNITYSDK_OFFSET(0xB309C50)
#define KBJPMKNHBBI_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB308960)
#define KBJPMKNHBBI_JKEPMIGBCIH_OFFSET UNITYSDK_OFFSET(0xB308DC0)
#define KBJPMKNHBBI_KBNPBDFDEHN_OFFSET UNITYSDK_OFFSET(0xB308470)
#define KBJPMKNHBBI_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB3087F0)
#define KBJPMKNHBBI_PAODCEOMFON_OFFSET UNITYSDK_OFFSET(0xB309E60)
#define KBJPMKNHBBI_PDDPCHJAGHP_OFFSET UNITYSDK_OFFSET(0xB308B50)
#define KBJPMKNHBBI_PONPBHKODIF_OFFSET UNITYSDK_OFFSET(0xB309DF0)

	class KBJPMKNHBBI : public ::GDCHAKILGCN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_CTOR_OFFSET))(this);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void KBNPBDFDEHN(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_KBNPBDFDEHN_OFFSET))(this, a1, a2);
		}

		::System::Boolean PONPBHKODIF(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_PONPBHKODIF_OFFSET))(this, a1);
		}

		::System::Void PDDPCHJAGHP(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_PDDPCHJAGHP_OFFSET))(this, a1);
		}

		::System::Void GGCCNDAIMDF(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_GGCCNDAIMDF_OFFSET))(this, a1);
		}

		::System::Boolean PAODCEOMFON(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_PAODCEOMFON_OFFSET))(this, a1);
		}

		::System::Void HGCDKAJKCIP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_HGCDKAJKCIP_OFFSET))(this, a1, a2);
		}

		::System::Void JKEPMIGBCIH(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_JKEPMIGBCIH_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJPMKNHBBI_EPPAFNJFCMH_OFFSET))(this);
		}

	};
