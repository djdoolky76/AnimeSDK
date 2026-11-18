#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;

#define EDEPGEKDCID_CIHPIOFDNNF_MDDJOEHDCHE_OFFSET UNITYSDK_OFFSET(0x12BE45B0)
#define EDEPGEKDCID_CIHPIOFDNNF__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE45A0)

inline static constexpr unsigned int EDEPGEKDCID_CIHPIOFDNNF_TypeDefinitionIndex = 62895;

class EDEPGEKDCID_CIHPIOFDNNF : public ::System::Object
{
public:
	::System::Int32 KJMPMHECMMB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDEPGEKDCID_CIHPIOFDNNF__CTOR_OFFSET))(this);
	}

	::System::Boolean MDDJOEHDCHE(::BJBMLMHDOME* DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::BJBMLMHDOME*))((::PBYTE)hIl2Cpp + EDEPGEKDCID_CIHPIOFDNNF_MDDJOEHDCHE_OFFSET))(this, DEKJDEPKKLH);
	}
};
