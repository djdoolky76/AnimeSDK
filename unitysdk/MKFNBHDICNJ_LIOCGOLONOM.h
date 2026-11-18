#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDAIBIIJLKD.h"

#define MKFNBHDICNJ_LIOCGOLONOM_HFELCLFLCLM_OFFSET UNITYSDK_OFFSET(0x17D45CA0)
#define MKFNBHDICNJ_LIOCGOLONOM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45C90)

inline static constexpr unsigned int MKFNBHDICNJ_LIOCGOLONOM_TypeDefinitionIndex = 61349;

class MKFNBHDICNJ_LIOCGOLONOM : public ::System::Object
{
public:
	::System::Int32 AODOAPNMLFN; // 0x10
	::System::Int32 CBNOFJDHHDK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LIOCGOLONOM__CTOR_OFFSET))(this);
	}

	::System::Boolean HFELCLFLCLM(::IDAIBIIJLKD MPIDLEHCABJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::IDAIBIIJLKD))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LIOCGOLONOM_HFELCLFLCLM_OFFSET))(this, MPIDLEHCABJ);
	}
};
