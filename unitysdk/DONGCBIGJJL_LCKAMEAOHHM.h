#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class String; }

#define DONGCBIGJJL_LCKAMEAOHHM_CJAIEMCINNF_OFFSET UNITYSDK_OFFSET(0x17217570)
#define DONGCBIGJJL_LCKAMEAOHHM__CTOR_OFFSET UNITYSDK_OFFSET(0x17217560)

inline static constexpr unsigned int DONGCBIGJJL_LCKAMEAOHHM_TypeDefinitionIndex = 70497;

class DONGCBIGJJL_LCKAMEAOHHM : public ::System::Object
{
public:
	::NJIEOECLNOM* FJHIDNECMIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_LCKAMEAOHHM__CTOR_OFFSET))(this);
	}

	::System::String* CJAIEMCINNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_LCKAMEAOHHM_CJAIEMCINNF_OFFSET))(this);
	}
};
