#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HJGNHOPCGKD;
namespace System { class Action; }

#define HJGNHOPCGKD_JGPDHLHHFMN_CKDMNODCAOK_OFFSET UNITYSDK_OFFSET(0x10117D80)
#define HJGNHOPCGKD_JGPDHLHHFMN_FMGFMJAPNCM_OFFSET UNITYSDK_OFFSET(0x10117AD0)
#define HJGNHOPCGKD_JGPDHLHHFMN_KMAAAMJFOAF_OFFSET UNITYSDK_OFFSET(0x10117940)
#define HJGNHOPCGKD_JGPDHLHHFMN__CTOR_OFFSET UNITYSDK_OFFSET(0x10117930)

inline static constexpr unsigned int HJGNHOPCGKD_JGPDHLHHFMN_TypeDefinitionIndex = 60101;

class HJGNHOPCGKD_JGPDHLHHFMN : public ::System::Object
{
public:
	::HJGNHOPCGKD* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGNHOPCGKD_JGPDHLHHFMN__CTOR_OFFSET))(this);
	}

	::System::Void KMAAAMJFOAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGNHOPCGKD_JGPDHLHHFMN_KMAAAMJFOAF_OFFSET))(this);
	}

	::System::Void FMGFMJAPNCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGNHOPCGKD_JGPDHLHHFMN_FMGFMJAPNCM_OFFSET))(this);
	}

	::System::Void CKDMNODCAOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGNHOPCGKD_JGPDHLHHFMN_CKDMNODCAOK_OFFSET))(this);
	}
};
