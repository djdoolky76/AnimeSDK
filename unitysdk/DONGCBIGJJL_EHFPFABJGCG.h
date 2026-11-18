#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class String; }

#define DONGCBIGJJL_EHFPFABJGCG_KDPFMFGDIGF_OFFSET UNITYSDK_OFFSET(0x13E65470)
#define DONGCBIGJJL_EHFPFABJGCG__CTOR_OFFSET UNITYSDK_OFFSET(0x13E65460)

inline static constexpr unsigned int DONGCBIGJJL_EHFPFABJGCG_TypeDefinitionIndex = 70493;

class DONGCBIGJJL_EHFPFABJGCG : public ::System::Object
{
public:
	::NJIEOECLNOM* GDGJGPEKAAB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_EHFPFABJGCG__CTOR_OFFSET))(this);
	}

	::System::String* KDPFMFGDIGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_EHFPFABJGCG_KDPFMFGDIGF_OFFSET))(this);
	}
};
