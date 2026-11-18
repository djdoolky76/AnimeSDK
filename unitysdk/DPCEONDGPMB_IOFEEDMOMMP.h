#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NFJODMOHNOE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DPCEONDGPMB_IOFEEDMOMMP_FDLHLDAGLBO_OFFSET UNITYSDK_OFFSET(0x12BD82B0)
#define DPCEONDGPMB_IOFEEDMOMMP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD82A0)

inline static constexpr unsigned int DPCEONDGPMB_IOFEEDMOMMP_TypeDefinitionIndex = 91701;

class DPCEONDGPMB_IOFEEDMOMMP : public ::System::Object
{
public:
	::NFJODMOHNOE* ANCJHFMFKDM; // 0x10
	::System::Func_2<::System::Int32, ::System::Boolean>* KNGDEEPCNGG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_IOFEEDMOMMP__CTOR_OFFSET))(this);
	}

	::System::Boolean FDLHLDAGLBO(::System::Int32 ALBNFNCECKJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPCEONDGPMB_IOFEEDMOMMP_FDLHLDAGLBO_OFFSET))(this, ALBNFNCECKJ);
	}
};
