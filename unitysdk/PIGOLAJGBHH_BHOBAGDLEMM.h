#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADEJAGFCBHK;
class PIGOLAJGBHH;
namespace System { class Action; }

#define PIGOLAJGBHH_BHOBAGDLEMM_GJCKJBKLDIG_OFFSET UNITYSDK_OFFSET(0x1197E710)
#define PIGOLAJGBHH_BHOBAGDLEMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1197E700)

inline static constexpr unsigned int PIGOLAJGBHH_BHOBAGDLEMM_TypeDefinitionIndex = 39558;

class PIGOLAJGBHH_BHOBAGDLEMM : public ::System::Object
{
public:
	::PIGOLAJGBHH* KLHPEBKNIFB; // 0x10
	::System::Action* KAKAEMACNPB; // 0x18
	::ADEJAGFCBHK* KHIPIMHDKOP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGOLAJGBHH_BHOBAGDLEMM__CTOR_OFFSET))(this);
	}

	::System::Void GJCKJBKLDIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGOLAJGBHH_BHOBAGDLEMM_GJCKJBKLDIG_OFFSET))(this);
	}
};
