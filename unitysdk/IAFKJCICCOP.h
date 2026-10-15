#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEDKGBHGAPN.h"
#include "unitysdk/System/Object.h"
class ENJFKKLJMOJ;
class GHGHADEAHFI;
class GMIMDEJMFCO;
class IGACELAIJCM;
class JEGLOCLFCMI;
class JNKDKJGMMJF;
class OHFAIMEFBME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAFKJCICCOP_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x15E0BF30)
#define IAFKJCICCOP_BFJLEOOGOKC_OFFSET UNITYSDK_OFFSET(0x15E0C760)
#define IAFKJCICCOP_BFMJADBNMAF_OFFSET UNITYSDK_OFFSET(0x15E0C8E0)
#define IAFKJCICCOP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0BC20)
#define IAFKJCICCOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E0BD10)
#define IAFKJCICCOP_EAJNEIMKMEI_OFFSET UNITYSDK_OFFSET(0x15E0CC40)
#define IAFKJCICCOP_HEIBCFCIKJM_OFFSET UNITYSDK_OFFSET(0x15E0C980)
#define IAFKJCICCOP_HKPIEEOFANA_OFFSET UNITYSDK_OFFSET(0x15E0CAC0)
#define IAFKJCICCOP_HOBKHGGGEPA_OFFSET UNITYSDK_OFFSET(0x15E0CD90)
#define IAFKJCICCOP_KNHCEFMAEON_OFFSET UNITYSDK_OFFSET(0x15E0C6D0)
#define IAFKJCICCOP_LPIDFNJLDIM_OFFSET UNITYSDK_OFFSET(0x15E0CB50)
#define IAFKJCICCOP_OJNOALADNKP_OFFSET UNITYSDK_OFFSET(0x15E0CC90)

inline static constexpr unsigned int IAFKJCICCOP_TypeDefinitionIndex = 67175;

	class IAFKJCICCOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::EEDKGBHGAPN, ::JEGLOCLFCMI*>* IBGMHMIEJGE; // 0x10
		::ENJFKKLJMOJ* PLCHDIFCFJJ; // 0x18
		::JNKDKJGMMJF* LLDLACBENFC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKJCICCOP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKJCICCOP_DISPOSE_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::GMIMDEJMFCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIMDEJMFCO*))((::PBYTE)hIl2Cpp + IAFKJCICCOP_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void KNHCEFMAEON(::System::String* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + IAFKJCICCOP_KNHCEFMAEON_OFFSET))(this, a1, a2);
		}

		::System::Void BFJLEOOGOKC(::JEGLOCLFCMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGLOCLFCMI*))((::PBYTE)hIl2Cpp + IAFKJCICCOP_BFJLEOOGOKC_OFFSET))(this, a1);
		}

		::System::Void BFMJADBNMAF(::EEDKGBHGAPN a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEDKGBHGAPN))((::PBYTE)hIl2Cpp + IAFKJCICCOP_BFMJADBNMAF_OFFSET))(this, a1);
		}

		::System::Void HEIBCFCIKJM(::EEDKGBHGAPN a1, ::System::String* a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::EEDKGBHGAPN, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + IAFKJCICCOP_HEIBCFCIKJM_OFFSET))(this, a1, a2, a3);
		}

		::IGACELAIJCM* HKPIEEOFANA()
		{
			return ((::IGACELAIJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKJCICCOP_HKPIEEOFANA_OFFSET))(this);
		}

		::IGACELAIJCM* LPIDFNJLDIM(::EEDKGBHGAPN a1)
		{
			return ((::IGACELAIJCM*(*)(::PVOID, ::EEDKGBHGAPN))((::PBYTE)hIl2Cpp + IAFKJCICCOP_LPIDFNJLDIM_OFFSET))(this, a1);
		}

		::GHGHADEAHFI* EAJNEIMKMEI()
		{
			return ((::GHGHADEAHFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKJCICCOP_EAJNEIMKMEI_OFFSET))(this);
		}

		::OHFAIMEFBME* OJNOALADNKP(::EEDKGBHGAPN a1)
		{
			return ((::OHFAIMEFBME*(*)(::PVOID, ::EEDKGBHGAPN))((::PBYTE)hIl2Cpp + IAFKJCICCOP_OJNOALADNKP_OFFSET))(this, a1);
		}

		::ENJFKKLJMOJ* HOBKHGGGEPA()
		{
			return ((::ENJFKKLJMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKJCICCOP_HOBKHGGGEPA_OFFSET))(this);
		}

	};
