#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class PCMENEMPLGF;

#define PCMENEMPLGF_AKACOECCCKB_AACMCKLLBJK_OFFSET UNITYSDK_OFFSET(0x1AFD6B60)
#define PCMENEMPLGF_AKACOECCCKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6B50)

inline static constexpr unsigned int PCMENEMPLGF_AKACOECCCKB_TypeDefinitionIndex = 62856;

class PCMENEMPLGF_AKACOECCCKB : public ::System::Object
{
public:
	::DMHOLJNNCJA_PJJIMDAOJCJ* FHCPPMLNLIE; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18
	::System::Int32 ECAFPALMHLI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AKACOECCCKB__CTOR_OFFSET))(this);
	}

	::System::Void AACMCKLLBJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_AKACOECCCKB_AACMCKLLBJK_OFFSET))(this);
	}
};
