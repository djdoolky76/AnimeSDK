#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PIGOLAJGBHH_BHOBAGDLEMM;

#define PIGOLAJGBHH_HDAMLNOLJGD_IFEEDIPHIBK_OFFSET UNITYSDK_OFFSET(0x178D51F0)
#define PIGOLAJGBHH_HDAMLNOLJGD__CTOR_OFFSET UNITYSDK_OFFSET(0x178D51E0)

inline static constexpr unsigned int PIGOLAJGBHH_HDAMLNOLJGD_TypeDefinitionIndex = 39555;

class PIGOLAJGBHH_HDAMLNOLJGD : public ::System::Object
{
public:
	::PIGOLAJGBHH_BHOBAGDLEMM* FGBNBFHOKAA; // 0x10
	::System::Int32 FJHBHALGCKO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGOLAJGBHH_HDAMLNOLJGD__CTOR_OFFSET))(this);
	}

	::System::Void IFEEDIPHIBK(::System::Int32 AKIELOEBABD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIGOLAJGBHH_HDAMLNOLJGD_IFEEDIPHIBK_OFFSET))(this, AKIELOEBABD);
	}
};
