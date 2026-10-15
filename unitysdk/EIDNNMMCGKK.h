#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/System/Object.h"
class EIDNNMMCGKK;
class GHNMNFHDCME;
class KDOFOHHENPK;
class PKEDKJMGAII;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIDNNMMCGKK_AINKFEINNAK_OFFSET UNITYSDK_OFFSET(0x1C6006A0)
#define EIDNNMMCGKK_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C600D90)
#define EIDNNMMCGKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C600E90)
#define EIDNNMMCGKK_LIIMNJOMDGF_OFFSET UNITYSDK_OFFSET(0x1C600A70)
#define EIDNNMMCGKK_MMHFAADGPOD_OFFSET UNITYSDK_OFFSET(0x1C5ED650)
#define EIDNNMMCGKK_ODDLMKBIHGP_OFFSET UNITYSDK_OFFSET(0x1C6006F0)
#define EIDNNMMCGKK_PFPOLMIKGKF_OFFSET UNITYSDK_OFFSET(0x1C600810)
#define EIDNNMMCGKK_PJPKJPBKOKP_OFFSET UNITYSDK_OFFSET(0x1C600930)
#define EIDNNMMCGKK_POPILNPECEP_OFFSET UNITYSDK_OFFSET(0x1C5E6DA0)

	class EIDNNMMCGKK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* EBCFEAHLKPM; // 0x10
		::KDOFOHHENPK* MCJILFPCKJN; // 0x18
		::System::Collections::Generic::List_1<::GHNMNFHDCME*>* OLJCAJMFJPO; // 0x20
		::KDOFOHHENPK* BBGODLKOKJI; // 0x28
		::PKEDKJMGAII* MOOLLCMKOLP; // 0x30
		::System::Int32 EMFGEFNHOIB; // 0x38
		::System::UInt32 LGPNMPBJIBO; // 0x3C
		::System::Int32 NJEANCPDJBP; // 0x40
		::System::Int32 KEJIOAKDAFK; // 0x44
		::System::Int32 KKAEBHGLODH; // 0x48
		::System::Int32 PGPAHPDCDOL; // 0x4C
		::System::Int32 MCCIKOBOIEM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_CTOR_OFFSET))(this);
		}

		::System::Boolean MMHFAADGPOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_MMHFAADGPOD_OFFSET))(this);
		}

		::System::Boolean AINKFEINNAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_AINKFEINNAK_OFFSET))(this);
		}

		::GHNMNFHDCME* ODDLMKBIHGP(::System::UInt32 a1)
		{
			return ((::GHNMNFHDCME*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_ODDLMKBIHGP_OFFSET))(this, a1);
		}

		::GHNMNFHDCME* PFPOLMIKGKF(::System::UInt32 a1)
		{
			return ((::GHNMNFHDCME*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_PFPOLMIKGKF_OFFSET))(this, a1);
		}

		::System::Void PJPKJPBKOKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_PJPKJPBKOKP_OFFSET))(this, a1);
		}

		::System::Int32 LIIMNJOMDGF(::RPG::GameCore::DiceCombatAdditivePropertyType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_LIIMNJOMDGF_OFFSET))(this, a1);
		}

		::System::Boolean POPILNPECEP(::RPG::GameCore::DiceCombatModifierFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatModifierFlag))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_POPILNPECEP_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO(::EIDNNMMCGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDNNMMCGKK*))((::PBYTE)hIl2Cpp + EIDNNMMCGKK_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
