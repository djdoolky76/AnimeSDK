#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_EGHMGHCLGLK_HNPOOLBNIPF_OFFSET UNITYSDK_OFFSET(0x115AB960)
#define NMMDCJGKHOB_EGHMGHCLGLK__CTOR_OFFSET UNITYSDK_OFFSET(0x115AB950)

inline static constexpr unsigned int NMMDCJGKHOB_EGHMGHCLGLK_TypeDefinitionIndex = 54818;

class NMMDCJGKHOB_EGHMGHCLGLK : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_EGHMGHCLGLK__CTOR_OFFSET))(this);
	}

	::System::Void HNPOOLBNIPF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_EGHMGHCLGLK_HNPOOLBNIPF_OFFSET))(this, GLAOEHCGCFO);
	}
};
