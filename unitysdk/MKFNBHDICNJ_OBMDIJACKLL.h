#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJLIAOJCHIH;

#define MKFNBHDICNJ_OBMDIJACKLL_CJAJLDFMGKF_OFFSET UNITYSDK_OFFSET(0x11A11480)
#define MKFNBHDICNJ_OBMDIJACKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A11470)

inline static constexpr unsigned int MKFNBHDICNJ_OBMDIJACKLL_TypeDefinitionIndex = 61337;

class MKFNBHDICNJ_OBMDIJACKLL : public ::System::Object
{
public:
	::System::Int32 BMPFDAECMCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OBMDIJACKLL__CTOR_OFFSET))(this);
	}

	::System::Boolean CJAJLDFMGKF(::CJLIAOJCHIH* DFHLAIEHEGI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJLIAOJCHIH*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OBMDIJACKLL_CJAJLDFMGKF_OFFSET))(this, DFHLAIEHEGI);
	}
};
