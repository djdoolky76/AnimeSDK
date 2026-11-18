#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class PCMENEMPLGF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCMENEMPLGF_EACIKLBCEKF_EKMJMDHPBGH_OFFSET UNITYSDK_OFFSET(0x11B57FA0)
#define PCMENEMPLGF_EACIKLBCEKF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B57F90)

inline static constexpr unsigned int PCMENEMPLGF_EACIKLBCEKF_TypeDefinitionIndex = 62842;

class PCMENEMPLGF_EACIKLBCEKF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OGDGNFKOGHC; // 0x10
	::System::Collections::Generic::Dictionary_2<::BPHGNMNLLHF*, ::System::Int32>* KGJDFBFDECF; // 0x18
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_EACIKLBCEKF__CTOR_OFFSET))(this);
	}

	::System::Int32 EKMJMDHPBGH(::BPHGNMNLLHF* EJCBEJMGFAJ, ::BPHGNMNLLHF* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHGNMNLLHF*, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_EACIKLBCEKF_EKMJMDHPBGH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
