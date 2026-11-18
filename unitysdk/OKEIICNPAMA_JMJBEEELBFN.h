#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_JMJBEEELBFN_JKJMKDNFMJG_OFFSET UNITYSDK_OFFSET(0xF199290)
#define OKEIICNPAMA_JMJBEEELBFN_MEOKGPOCMNP_OFFSET UNITYSDK_OFFSET(0xF1992A0)
#define OKEIICNPAMA_JMJBEEELBFN__CTOR_OFFSET UNITYSDK_OFFSET(0xF199280)

inline static constexpr unsigned int OKEIICNPAMA_JMJBEEELBFN_TypeDefinitionIndex = 87993;

class OKEIICNPAMA_JMJBEEELBFN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JMJBEEELBFN__CTOR_OFFSET))(this);
	}

	::System::Void JKJMKDNFMJG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JMJBEEELBFN_JKJMKDNFMJG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MEOKGPOCMNP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JMJBEEELBFN_MEOKGPOCMNP_OFFSET))(this, PIIPCLCCOIG);
	}
};
