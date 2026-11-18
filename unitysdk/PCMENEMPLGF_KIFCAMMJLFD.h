#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF_HMFAJOGLCNJ;

#define PCMENEMPLGF_KIFCAMMJLFD_ICDEOOEHHBE_OFFSET UNITYSDK_OFFSET(0xFDA3BF0)
#define PCMENEMPLGF_KIFCAMMJLFD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA3BE0)

inline static constexpr unsigned int PCMENEMPLGF_KIFCAMMJLFD_TypeDefinitionIndex = 62860;

class PCMENEMPLGF_KIFCAMMJLFD : public ::System::Object
{
public:
	::PCMENEMPLGF_HMFAJOGLCNJ* FGBNBFHOKAA; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_KIFCAMMJLFD__CTOR_OFFSET))(this);
	}

	::System::Single ICDEOOEHHBE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_KIFCAMMJLFD_ICDEOOEHHBE_OFFSET))(this);
	}
};
