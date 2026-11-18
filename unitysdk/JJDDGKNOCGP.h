#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JJDDGKNOCGP_ADHFHMLGMHD_OFFSET UNITYSDK_OFFSET(0x14A80E80)
#define JJDDGKNOCGP_BNPKKAPGLLF_OFFSET UNITYSDK_OFFSET(0x14A80E40)
#define JJDDGKNOCGP_FBPJFMLFCKD_OFFSET UNITYSDK_OFFSET(0x14A80E90)
#define JJDDGKNOCGP_HEIOFFPPPJL_OFFSET UNITYSDK_OFFSET(0x14A80ED0)
#define JJDDGKNOCGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14A80E30)

inline static constexpr unsigned int JJDDGKNOCGP_TypeDefinitionIndex = 86755;

class JJDDGKNOCGP : public ::System::Object
{
public:
	::System::Boolean _MKPBLBCAJBE_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDDGKNOCGP__CTOR_OFFSET))(this);
	}

	::System::Void BNPKKAPGLLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDDGKNOCGP_BNPKKAPGLLF_OFFSET))(this);
	}

	::System::Void ADHFHMLGMHD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJDDGKNOCGP_ADHFHMLGMHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FBPJFMLFCKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDDGKNOCGP_FBPJFMLFCKD_OFFSET))(this);
	}

	::System::Boolean HEIOFFPPPJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDDGKNOCGP_HEIOFFPPPJL_OFFSET))(this);
	}
};
