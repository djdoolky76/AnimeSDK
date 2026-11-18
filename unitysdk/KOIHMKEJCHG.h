#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define KOIHMKEJCHG_DLIPMGPPCFN_OFFSET UNITYSDK_OFFSET(0x176730D0)
#define KOIHMKEJCHG_ONPLJNOOMFN_1_OFFSET UNITYSDK_OFFSET(0x17673080)
#define KOIHMKEJCHG_ONPLJNOOMFN_2_OFFSET UNITYSDK_OFFSET(0x17672F50)
#define KOIHMKEJCHG_ONPLJNOOMFN_3_OFFSET UNITYSDK_OFFSET(0x17673210)
#define KOIHMKEJCHG_ONPLJNOOMFN_OFFSET UNITYSDK_OFFSET(0x17672EE0)

inline static constexpr unsigned int KOIHMKEJCHG_TypeDefinitionIndex = 53422;

class KOIHMKEJCHG : public ::System::Object
{
public:
	static ::System::Boolean ONPLJNOOMFN(::HGAJKHIMKJP* PMHJBOFDPEJ)
	{
		return ((::System::Boolean(*)(::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + KOIHMKEJCHG_ONPLJNOOMFN_OFFSET))(PMHJBOFDPEJ);
	}

	static ::System::Boolean ONPLJNOOMFN_1(::System::UInt32 KCNOHOOPNAH)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOIHMKEJCHG_ONPLJNOOMFN_1_OFFSET))(KCNOHOOPNAH);
	}

	static ::System::Boolean ONPLJNOOMFN_2(::System::Int32 KCNOHOOPNAH, ::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Share::EItemType))((::PBYTE)hIl2Cpp + KOIHMKEJCHG_ONPLJNOOMFN_2_OFFSET))(KCNOHOOPNAH, JCHOHDBNCKJ);
	}

	static ::Share::EItemType DLIPMGPPCFN(::System::Int32 KCNOHOOPNAH)
	{
		return ((::Share::EItemType(*)(::System::Int32))((::PBYTE)hIl2Cpp + KOIHMKEJCHG_DLIPMGPPCFN_OFFSET))(KCNOHOOPNAH);
	}

	static ::System::Boolean ONPLJNOOMFN_3(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + KOIHMKEJCHG_ONPLJNOOMFN_3_OFFSET))(KCNOHOOPNAH);
	}
};
