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

#define EIDNNMMCGKK_AINKFEINNAK_OFFSET UNITYSDK_OFFSET(0x1C5D2290)
#define EIDNNMMCGKK_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C5D2980)
#define EIDNNMMCGKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D2A80)
#define EIDNNMMCGKK_LIIMNJOMDGF_OFFSET UNITYSDK_OFFSET(0x1C5D2660)
#define EIDNNMMCGKK_MMHFAADGPOD_OFFSET UNITYSDK_OFFSET(0x1C5BF220)
#define EIDNNMMCGKK_ODDLMKBIHGP_OFFSET UNITYSDK_OFFSET(0x1C5D22E0)
#define EIDNNMMCGKK_PFPOLMIKGKF_OFFSET UNITYSDK_OFFSET(0x1C5D2400)
#define EIDNNMMCGKK_PJPKJPBKOKP_OFFSET UNITYSDK_OFFSET(0x1C5D2520)
#define EIDNNMMCGKK_POPILNPECEP_OFFSET UNITYSDK_OFFSET(0x1C5B8960)

inline static constexpr unsigned int EIDNNMMCGKK_TypeDefinitionIndex = 36192;

	class EIDNNMMCGKK : public ::System::Object
	{
	public:
		::KDOFOHHENPK* MCJILFPCKJN; // 0x10
		::PKEDKJMGAII* MOOLLCMKOLP; // 0x18
		::KDOFOHHENPK* BBGODLKOKJI; // 0x20
		::System::Collections::Generic::List_1<::GHNMNFHDCME*>* OLJCAJMFJPO; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* EBCFEAHLKPM; // 0x30
		::System::Int32 EMFGEFNHOIB; // 0x38
		::System::Int32 KEJIOAKDAFK; // 0x3C
		::System::Int32 KKAEBHGLODH; // 0x40
		::System::Int32 NJEANCPDJBP; // 0x44
		::System::Int32 PGPAHPDCDOL; // 0x48
		::System::UInt32 LGPNMPBJIBO; // 0x4C
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
