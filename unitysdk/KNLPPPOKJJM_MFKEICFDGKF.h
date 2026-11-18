#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_MFKEICFDGKF_COOGNGNMIMP_OFFSET UNITYSDK_OFFSET(0x13C85EA0)
#define KNLPPPOKJJM_MFKEICFDGKF_NCPHPLJLMCF_OFFSET UNITYSDK_OFFSET(0x13C85EB0)
#define KNLPPPOKJJM_MFKEICFDGKF__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85E90)

inline static constexpr unsigned int KNLPPPOKJJM_MFKEICFDGKF_TypeDefinitionIndex = 67496;

class KNLPPPOKJJM_MFKEICFDGKF : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_MFKEICFDGKF__CTOR_OFFSET))(this);
	}

	::System::Void COOGNGNMIMP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_MFKEICFDGKF_COOGNGNMIMP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void NCPHPLJLMCF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_MFKEICFDGKF_NCPHPLJLMCF_OFFSET))(this, BHDNBGLCNOM);
	}
};
