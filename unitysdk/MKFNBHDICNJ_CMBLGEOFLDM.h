#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJLIAOJCHIH;

#define MKFNBHDICNJ_CMBLGEOFLDM_JLGNDHKFHIL_OFFSET UNITYSDK_OFFSET(0x177C7CF0)
#define MKFNBHDICNJ_CMBLGEOFLDM__CTOR_OFFSET UNITYSDK_OFFSET(0x177C7CE0)

inline static constexpr unsigned int MKFNBHDICNJ_CMBLGEOFLDM_TypeDefinitionIndex = 61329;

class MKFNBHDICNJ_CMBLGEOFLDM : public ::System::Object
{
public:
	::System::Int32 PAFLDMNNIGP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CMBLGEOFLDM__CTOR_OFFSET))(this);
	}

	::System::Boolean JLGNDHKFHIL(::CJLIAOJCHIH* DFHLAIEHEGI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJLIAOJCHIH*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CMBLGEOFLDM_JLGNDHKFHIL_OFFSET))(this, DFHLAIEHEGI);
	}
};
