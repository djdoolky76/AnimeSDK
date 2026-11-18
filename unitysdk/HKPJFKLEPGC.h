#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBEJPBPDEN.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class DKPJAEANAPO;
class JOOHBDMHGCA;
class LACHKEHCGNO;
class NLNIIPDCABP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKPJFKLEPGC_AEPOGEOBHBN_OFFSET UNITYSDK_OFFSET(0x1011A510)
#define HKPJFKLEPGC_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x1011A3F0)
#define HKPJFKLEPGC_DGJBHBPPBOP_OFFSET UNITYSDK_OFFSET(0x1011A390)
#define HKPJFKLEPGC_FMNLBKAIGKF_OFFSET UNITYSDK_OFFSET(0x1011A5F0)
#define HKPJFKLEPGC_HHMJIKCEKCB_OFFSET UNITYSDK_OFFSET(0x1011A500)
#define HKPJFKLEPGC_IIPKOJLKCHD_OFFSET UNITYSDK_OFFSET(0x10119D80)
#define HKPJFKLEPGC_JCPJGMLHMCB_OFFSET UNITYSDK_OFFSET(0x1011A190)
#define HKPJFKLEPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1011A4F0)

inline static constexpr unsigned int HKPJFKLEPGC_TypeDefinitionIndex = 42560;

class HKPJFKLEPGC : public ::GLBEJPBPDEN
{
public:
	::LACHKEHCGNO* CCNCPIACFAC; // 0x90
	::DKPJAEANAPO* HLNKECDMDIA; // 0x98
	::NLNIIPDCABP* LJIGGKABNDM; // 0xA0
	::JOOHBDMHGCA* ADPGHCMLFPH; // 0xA8
	::ACNLKLCDALA* BLIGFBOGPMN; // 0xB0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* MNBKLIFCGLK; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPJFKLEPGC__CTOR_OFFSET))(this);
	}

	::System::Boolean IIPKOJLKCHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_IIPKOJLKCHD_OFFSET))(this);
	}

	::System::Boolean JCPJGMLHMCB(::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_JCPJGMLHMCB_OFFSET))(this, GKOEEJHILPG, IACKHFCLPJI);
	}

	::System::Void DGJBHBPPBOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_DGJBHBPPBOP_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void HHMJIKCEKCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_HHMJIKCEKCB_OFFSET))(this);
	}

	::System::Boolean AEPOGEOBHBN(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_AEPOGEOBHBN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void FMNLBKAIGKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPJFKLEPGC_FMNLBKAIGKF_OFFSET))(this);
	}
};
