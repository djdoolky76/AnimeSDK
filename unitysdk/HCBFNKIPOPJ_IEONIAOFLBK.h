#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCBFNKIPOPJ;
class HEMMOPDOMEA;
class MDLHOCBNDMD;

#define HCBFNKIPOPJ_IEONIAOFLBK_FAPNKIJPDMG_OFFSET UNITYSDK_OFFSET(0x16CE06A0)
#define HCBFNKIPOPJ_IEONIAOFLBK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE0690)

inline static constexpr unsigned int HCBFNKIPOPJ_IEONIAOFLBK_TypeDefinitionIndex = 60435;

class HCBFNKIPOPJ_IEONIAOFLBK : public ::System::Object
{
public:
	::MDLHOCBNDMD* HNOPAJLDCFB; // 0x10
	::HCBFNKIPOPJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_IEONIAOFLBK__CTOR_OFFSET))(this);
	}

	::System::Void FAPNKIJPDMG(::System::Boolean DJCNCELJPOM, ::HEMMOPDOMEA* BELEHPLHKKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HEMMOPDOMEA*))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_IEONIAOFLBK_FAPNKIJPDMG_OFFSET))(this, DJCNCELJPOM, BELEHPLHKKN);
	}
};
