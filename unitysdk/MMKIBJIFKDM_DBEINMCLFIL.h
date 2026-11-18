#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPGLKKMDFID;

#define MMKIBJIFKDM_DBEINMCLFIL_DFONCEHNFNG_OFFSET UNITYSDK_OFFSET(0x17D529A0)
#define MMKIBJIFKDM_DBEINMCLFIL__CTOR_OFFSET UNITYSDK_OFFSET(0x17D52990)

inline static constexpr unsigned int MMKIBJIFKDM_DBEINMCLFIL_TypeDefinitionIndex = 53939;

class MMKIBJIFKDM_DBEINMCLFIL : public ::System::Object
{
public:
	::System::Int32 CDONJOHFOMM; // 0x10
	::System::Int32 FIOCHBBFGLA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_DBEINMCLFIL__CTOR_OFFSET))(this);
	}

	::System::Boolean DFONCEHNFNG(::FPGLKKMDFID* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FPGLKKMDFID*))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_DBEINMCLFIL_DFONCEHNFNG_OFFSET))(this, LJBPECKCCEA);
	}
};
