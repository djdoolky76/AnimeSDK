#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"
#include "unitysdk/KHICKBAEJDB.h"

#define PDCDJKAFHBD_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x14B91EB0)
#define PDCDJKAFHBD_ONFBLIJJKBE_OFFSET UNITYSDK_OFFSET(0x14B91EA0)
#define PDCDJKAFHBD__CTOR_OFFSET UNITYSDK_OFFSET(0x14B91E90)

inline static constexpr unsigned int PDCDJKAFHBD_TypeDefinitionIndex = 74859;

class PDCDJKAFHBD : public ::JNAGFFCCOHI
{
public:
	::KHICKBAEJDB _EGBKMJIFEKN_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCDJKAFHBD__CTOR_OFFSET))(this);
	}

	::System::Void ONFBLIJJKBE(::KHICKBAEJDB EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KHICKBAEJDB))((::PBYTE)hIl2Cpp + PDCDJKAFHBD_ONFBLIJJKBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::KHICKBAEJDB MDLLGIMAGCP()
	{
		return ((::KHICKBAEJDB(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCDJKAFHBD_MDLLGIMAGCP_OFFSET))(this);
	}
};
