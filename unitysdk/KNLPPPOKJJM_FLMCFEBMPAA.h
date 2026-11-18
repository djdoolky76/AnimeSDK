#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_FLMCFEBMPAA_DPFNLHPAGOJ_OFFSET UNITYSDK_OFFSET(0x13C85D90)
#define KNLPPPOKJJM_FLMCFEBMPAA_EMOFIPDJFLD_OFFSET UNITYSDK_OFFSET(0x13C85DA0)
#define KNLPPPOKJJM_FLMCFEBMPAA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85D80)

inline static constexpr unsigned int KNLPPPOKJJM_FLMCFEBMPAA_TypeDefinitionIndex = 67497;

class KNLPPPOKJJM_FLMCFEBMPAA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_FLMCFEBMPAA__CTOR_OFFSET))(this);
	}

	::System::Void DPFNLHPAGOJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_FLMCFEBMPAA_DPFNLHPAGOJ_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EMOFIPDJFLD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_FLMCFEBMPAA_EMOFIPDJFLD_OFFSET))(this, BHDNBGLCNOM);
	}
};
