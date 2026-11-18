#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOPPIEGOHHA.h"
#include "unitysdk/System/ValueType.h"

class BFONKMKLHNI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class ADLDJCGMPNO_1;

#define EOFBEONAPII_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x987620)
#define EOFBEONAPII_BJEKJPMBLNK_OFFSET UNITYSDK_OFFSET(0x1F7A18B0)
#define EOFBEONAPII_CJFFGAKECLH_OFFSET UNITYSDK_OFFSET(0x987680)
#define EOFBEONAPII_DIGEIBDMKDO_OFFSET UNITYSDK_OFFSET(0x359320)
#define EOFBEONAPII_FAHPGMLGALM_OFFSET UNITYSDK_OFFSET(0x359150)
#define EOFBEONAPII_JICGPHAIEMP_OFFSET UNITYSDK_OFFSET(0x987570)
#define EOFBEONAPII_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x987560)

inline static constexpr unsigned int EOFBEONAPII_TypeDefinitionIndex = 28913;

struct alignas(8) EOFBEONAPII
{
	::System::UInt32 _DGNFONGLMAB_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BOPPIEGOHHA>* NGDNEBBBPIC; // 0x18

	::System::UInt32 DIGEIBDMKDO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFBEONAPII_DIGEIBDMKDO_OFFSET))(this);
	}

	::System::Void FAHPGMLGALM(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOFBEONAPII_FAHPGMLGALM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFBEONAPII_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Boolean JICGPHAIEMP(::System::UInt32 BKLGNCBNEGM, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EOFBEONAPII_JICGPHAIEMP_OFFSET))(this, BKLGNCBNEGM, MGMDLMBEDJF);
	}

	::System::Void ANPBCLAFCJB(::BFONKMKLHNI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BFONKMKLHNI*))((::PBYTE)hIl2Cpp + EOFBEONAPII_ANPBCLAFCJB_OFFSET))(this, GBELIHABEDH);
	}

	/*
	static ::EOFBEONAPII BJEKJPMBLNK(::ADLDJCGMPNO_1<::EOFBEONAPII>* JFPDJGAMELP, ::System::UInt32 JCEJDIHGDEA)
	{
		return ((::EOFBEONAPII(*)(::ADLDJCGMPNO_1<::EOFBEONAPII>*, ::System::UInt32))((::PBYTE)hIl2Cpp + EOFBEONAPII_BJEKJPMBLNK_OFFSET))(JFPDJGAMELP, JCEJDIHGDEA);
	}
	*/

	::System::Void CJFFGAKECLH(::BFONKMKLHNI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BFONKMKLHNI*))((::PBYTE)hIl2Cpp + EOFBEONAPII_CJFFGAKECLH_OFFSET))(this, GBELIHABEDH);
	}
};
