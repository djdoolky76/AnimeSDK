#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define CJLIAOJCHIH_DCADLJPAIHM_DFDLBNDPBDN_OFFSET UNITYSDK_OFFSET(0x1496B270)
#define CJLIAOJCHIH_DCADLJPAIHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1496B260)

inline static constexpr unsigned int CJLIAOJCHIH_DCADLJPAIHM_TypeDefinitionIndex = 51077;

class CJLIAOJCHIH_DCADLJPAIHM : public ::System::Object
{
public:
	::System::Int32 AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLIAOJCHIH_DCADLJPAIHM__CTOR_OFFSET))(this);
	}

	::System::Boolean DFDLBNDPBDN(::DJPEEJFNCHL* FGMNCNLGPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + CJLIAOJCHIH_DCADLJPAIHM_DFDLBNDPBDN_OFFSET))(this, FGMNCNLGPAP);
	}
};
