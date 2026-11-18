#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_OLDJMLBEKKE_LMBAPCCPIFI_OFFSET UNITYSDK_OFFSET(0x15BA5D40)
#define KNLPPPOKJJM_OLDJMLBEKKE_OPBDDAEHKJM_OFFSET UNITYSDK_OFFSET(0x15BA5C50)
#define KNLPPPOKJJM_OLDJMLBEKKE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5C40)

inline static constexpr unsigned int KNLPPPOKJJM_OLDJMLBEKKE_TypeDefinitionIndex = 67487;

class KNLPPPOKJJM_OLDJMLBEKKE : public ::System::Object
{
public:
	::System::Action_1<::System::UInt64>* EJGDHCIBCJH; // 0x10
	::System::Action_2<::System::Int32, ::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OLDJMLBEKKE__CTOR_OFFSET))(this);
	}

	::System::Void OPBDDAEHKJM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OLDJMLBEKKE_OPBDDAEHKJM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LMBAPCCPIFI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_OLDJMLBEKKE_LMBAPCCPIFI_OFFSET))(this, BHDNBGLCNOM);
	}
};
