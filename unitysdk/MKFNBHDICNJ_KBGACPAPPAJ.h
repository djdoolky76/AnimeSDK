#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJLIAOJCHIH;

#define MKFNBHDICNJ_KBGACPAPPAJ_DMCGGFNEHLF_OFFSET UNITYSDK_OFFSET(0x14D8BFF0)
#define MKFNBHDICNJ_KBGACPAPPAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8BFE0)

inline static constexpr unsigned int MKFNBHDICNJ_KBGACPAPPAJ_TypeDefinitionIndex = 61338;

class MKFNBHDICNJ_KBGACPAPPAJ : public ::System::Object
{
public:
	::System::Int32 BMPFDAECMCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_KBGACPAPPAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean DMCGGFNEHLF(::CJLIAOJCHIH* DFHLAIEHEGI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJLIAOJCHIH*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_KBGACPAPPAJ_DMCGGFNEHLF_OFFSET))(this, DFHLAIEHEGI);
	}
};
