#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_CONNCJCBMNE;

#define FBAMLABJMKF_OHHCIEHCOEA_GMPAJPFNEGN_OFFSET UNITYSDK_OFFSET(0x10F54850)
#define FBAMLABJMKF_OHHCIEHCOEA_IEJPFCEELNP_OFFSET UNITYSDK_OFFSET(0x10F54840)
#define FBAMLABJMKF_OHHCIEHCOEA_PKEJPCMILCF_OFFSET UNITYSDK_OFFSET(0x10F54B60)
#define FBAMLABJMKF_OHHCIEHCOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F54830)

inline static constexpr unsigned int FBAMLABJMKF_OHHCIEHCOEA_TypeDefinitionIndex = 78159;

class FBAMLABJMKF_OHHCIEHCOEA : public ::System::Object
{
public:
	::FBAMLABJMKF_CONNCJCBMNE* MFOCAFMBBGM; // 0x10
	::System::Single HACJFKBLODH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OHHCIEHCOEA__CTOR_OFFSET))(this);
	}

	::System::Void IEJPFCEELNP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OHHCIEHCOEA_IEJPFCEELNP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GMPAJPFNEGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OHHCIEHCOEA_GMPAJPFNEGN_OFFSET))(this);
	}

	::System::Single PKEJPCMILCF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OHHCIEHCOEA_PKEJPCMILCF_OFFSET))(this);
	}
};
