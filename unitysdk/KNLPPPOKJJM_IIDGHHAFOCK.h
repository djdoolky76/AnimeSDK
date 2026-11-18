#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_IIDGHHAFOCK_EFKEMCKCFEC_OFFSET UNITYSDK_OFFSET(0x15227C70)
#define KNLPPPOKJJM_IIDGHHAFOCK_HIDPHDNCLJO_OFFSET UNITYSDK_OFFSET(0x15227C00)
#define KNLPPPOKJJM_IIDGHHAFOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x15227BF0)

inline static constexpr unsigned int KNLPPPOKJJM_IIDGHHAFOCK_TypeDefinitionIndex = 67492;

class KNLPPPOKJJM_IIDGHHAFOCK : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18
	::System::UInt32 IACKHFCLPJI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_IIDGHHAFOCK__CTOR_OFFSET))(this);
	}

	::System::Void HIDPHDNCLJO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_IIDGHHAFOCK_HIDPHDNCLJO_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EFKEMCKCFEC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_IIDGHHAFOCK_EFKEMCKCFEC_OFFSET))(this, BHDNBGLCNOM);
	}
};
