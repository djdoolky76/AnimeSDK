#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJLIAOJCHIH;

#define MKFNBHDICNJ_LECCEAINIJM_IANHCDDDCLL_OFFSET UNITYSDK_OFFSET(0x12FF9320)
#define MKFNBHDICNJ_LECCEAINIJM__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF9310)

inline static constexpr unsigned int MKFNBHDICNJ_LECCEAINIJM_TypeDefinitionIndex = 61335;

class MKFNBHDICNJ_LECCEAINIJM : public ::System::Object
{
public:
	::System::Int32 BMPFDAECMCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LECCEAINIJM__CTOR_OFFSET))(this);
	}

	::System::Boolean IANHCDDDCLL(::CJLIAOJCHIH* DFHLAIEHEGI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJLIAOJCHIH*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LECCEAINIJM_IANHCDDDCLL_OFFSET))(this, DFHLAIEHEGI);
	}
};
