#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGJFKHIEPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD8C60)

inline static constexpr unsigned int BGJFKHIEPFP_TypeDefinitionIndex = 59566;

class BGJFKHIEPFP : public ::System::Object
{
public:
	::System::Int32 PMCNDKMMFDG; // 0x10
	::System::Int32 DBJCGNJOPPJ; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJFKHIEPFP__CTOR_OFFSET))(this);
	}
};
