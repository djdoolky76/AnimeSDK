#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LINKJGICBLE;
class LNFHNFGLPCD;
namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }

#define ACKGHDALHDK_GEKOIHCHPMB_BPJMIHPHEEH_OFFSET UNITYSDK_OFFSET(0x16D616A0)
#define ACKGHDALHDK_GEKOIHCHPMB_OIOCDLMKFHN_OFFSET UNITYSDK_OFFSET(0x16D616B0)
#define ACKGHDALHDK_GEKOIHCHPMB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D615B0)

inline static constexpr unsigned int ACKGHDALHDK_GEKOIHCHPMB_TypeDefinitionIndex = 79544;

class ACKGHDALHDK_GEKOIHCHPMB : public ::System::Object
{
public:
	::LNFHNFGLPCD* JEEHBHLDDBI; // 0x10
	::Foundation::PriorityQueue_2<::LINKJGICBLE*, ::System::Int32>* _HDPENDJDCAA_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKGHDALHDK_GEKOIHCHPMB__CTOR_OFFSET))(this);
	}

	::Foundation::PriorityQueue_2<::LINKJGICBLE*, ::System::Int32>* BPJMIHPHEEH()
	{
		return ((::Foundation::PriorityQueue_2<::LINKJGICBLE*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKGHDALHDK_GEKOIHCHPMB_BPJMIHPHEEH_OFFSET))(this);
	}

	static ::ACKGHDALHDK_GEKOIHCHPMB* OIOCDLMKFHN()
	{
		return ((::ACKGHDALHDK_GEKOIHCHPMB*(*)())((::PBYTE)hIl2Cpp + ACKGHDALHDK_GEKOIHCHPMB_OIOCDLMKFHN_OFFSET))();
	}
};
