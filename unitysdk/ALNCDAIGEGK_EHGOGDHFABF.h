#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALNCDAIGEGK;

#define ALNCDAIGEGK_EHGOGDHFABF_BBFJALLAMDE_OFFSET UNITYSDK_OFFSET(0x17CE13A0)
#define ALNCDAIGEGK_EHGOGDHFABF__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE1390)

inline static constexpr unsigned int ALNCDAIGEGK_EHGOGDHFABF_TypeDefinitionIndex = 71741;

class ALNCDAIGEGK_EHGOGDHFABF : public ::System::Object
{
public:
	::ALNCDAIGEGK* KLHPEBKNIFB; // 0x10
	::System::Int32 MCOHLHMKLIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNCDAIGEGK_EHGOGDHFABF__CTOR_OFFSET))(this);
	}

	::System::Void BBFJALLAMDE(::System::Single LJHBEGABCKI, ::System::Single FKABKJMDLNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ALNCDAIGEGK_EHGOGDHFABF_BBFJALLAMDE_OFFSET))(this, LJHBEGABCKI, FKABKJMDLNP);
	}
};
