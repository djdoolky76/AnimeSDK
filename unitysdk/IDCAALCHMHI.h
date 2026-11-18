#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define IDCAALCHMHI_FGDNILCLGCL_OFFSET UNITYSDK_OFFSET(0x16A93CA0)
#define IDCAALCHMHI_LIPIOGAFBKP_OFFSET UNITYSDK_OFFSET(0x16A93CB0)
#define IDCAALCHMHI__CTOR_OFFSET UNITYSDK_OFFSET(0x16A93C90)

inline static constexpr unsigned int IDCAALCHMHI_TypeDefinitionIndex = 52862;

class IDCAALCHMHI : public ::JNAGFFCCOHI
{
public:
	::System::UInt32 _DBPOAMJHCOJ_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCAALCHMHI__CTOR_OFFSET))(this);
	}

	::System::Void FGDNILCLGCL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDCAALCHMHI_FGDNILCLGCL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 LIPIOGAFBKP()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCAALCHMHI_LIPIOGAFBKP_OFFSET))(this);
	}
};
