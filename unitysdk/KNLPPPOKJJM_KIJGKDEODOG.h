#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHFAEGHDFGC;
class KNLPPPOKJJM;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_KIJGKDEODOG_IMIMEOHFPGD_OFFSET UNITYSDK_OFFSET(0x17672150)
#define KNLPPPOKJJM_KIJGKDEODOG_LGHPJFNNJIG_OFFSET UNITYSDK_OFFSET(0x176720D0)
#define KNLPPPOKJJM_KIJGKDEODOG__CTOR_OFFSET UNITYSDK_OFFSET(0x176720C0)

inline static constexpr unsigned int KNLPPPOKJJM_KIJGKDEODOG_TypeDefinitionIndex = 67499;

class KNLPPPOKJJM_KIJGKDEODOG : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action_1<::BHFAEGHDFGC*>* EJGDHCIBCJH; // 0x18
	::KNLPPPOKJJM* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KIJGKDEODOG__CTOR_OFFSET))(this);
	}

	::System::Void LGHPJFNNJIG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KIJGKDEODOG_LGHPJFNNJIG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void IMIMEOHFPGD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KIJGKDEODOG_IMIMEOHFPGD_OFFSET))(this, BHDNBGLCNOM);
	}
};
