#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
template <typename T1, typename T2> class PKICBCKCADA_2;

#define JFBNBOHNJBF_ODMNGGHKABA_JELCDDLIDIF_OFFSET UNITYSDK_OFFSET(0x5C7530)
#define JFBNBOHNJBF_ODMNGGHKABA_NBOPKJPKLBH_OFFSET UNITYSDK_OFFSET(0x5C7520)
#define JFBNBOHNJBF_ODMNGGHKABA_OAGKGKILLOF_OFFSET UNITYSDK_OFFSET(0x718ED0)
#define JFBNBOHNJBF_ODMNGGHKABA_PDCFHNADIFF_OFFSET UNITYSDK_OFFSET(0x718EE0)

inline static constexpr unsigned int JFBNBOHNJBF_ODMNGGHKABA_TypeDefinitionIndex = 90034;

struct alignas(8) JFBNBOHNJBF_ODMNGGHKABA
{
	::System::Boolean BEGGDDCNPEP; // 0x10
	::System::Boolean JAAGGAIPPIP; // 0x11
	::System::Byte _padding0[0x2];
	::System::Single DFBHCOGIKJM; // 0x14
	::System::Single PPFDDDHPPME; // 0x18
	::System::Single HNAIIHKKHND; // 0x1C
	::System::Single GCLJOKJFIEO; // 0x20
	::System::Single NJGMIOBAPJD; // 0x24
	::System::Single DEGHMFDNLED; // 0x28
	::System::Single AAKLFFMHDOG; // 0x2C
	::System::Single NLDFADGJJBN; // 0x30
	::System::Single AJEILNJKPEO; // 0x34
	::PKICBCKCADA_2<::System::String*, ::System::Single>* HGCOFILEEJM; // 0x38
	::PKICBCKCADA_2<::System::String*, ::System::Single>* ALANHGFAPMH; // 0x40

	::System::Void JELCDDLIDIF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFBNBOHNJBF_ODMNGGHKABA_JELCDDLIDIF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single OAGKGKILLOF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBNBOHNJBF_ODMNGGHKABA_OAGKGKILLOF_OFFSET))(this);
	}

	::System::Single PDCFHNADIFF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBNBOHNJBF_ODMNGGHKABA_PDCFHNADIFF_OFFSET))(this);
	}

	::System::Void NBOPKJPKLBH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFBNBOHNJBF_ODMNGGHKABA_NBOPKJPKLBH_OFFSET))(this, EGEGIMGMJHN);
	}
};
