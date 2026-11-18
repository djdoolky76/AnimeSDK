#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJNPNFPGDAM.h"
#include "unitysdk/System/Object.h"

class BKCNMHNKALM;
namespace System { class Action; }

#define PGNPPBLKCJF_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1C6558C0)
#define PGNPPBLKCJF_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x1C655860)
#define PGNPPBLKCJF_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1C655930)
#define PGNPPBLKCJF_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x1C655790)
#define PGNPPBLKCJF_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1C6557E0)
#define PGNPPBLKCJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C655740)

inline static constexpr unsigned int PGNPPBLKCJF_TypeDefinitionIndex = 56546;

class PGNPPBLKCJF : public ::System::Object
{
public:
	::BKCNMHNKALM* LCCOOHLHHPC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNPPBLKCJF__CTOR_OFFSET))(this);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNPPBLKCJF_JNBGBKMJGAG_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM(::JJNPNFPGDAM EFMODEHHJJG, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::JJNPNFPGDAM, ::System::Action*))((::PBYTE)hIl2Cpp + PGNPPBLKCJF_KKFNPONHGEM_OFFSET))(this, EFMODEHHJJG, GJBHEJGENMI);
	}

	::System::Void DKDJDEJHABH(::JJNPNFPGDAM EFMODEHHJJG)
	{
		return ((::System::Void(*)(::PVOID, ::JJNPNFPGDAM))((::PBYTE)hIl2Cpp + PGNPPBLKCJF_DKDJDEJHABH_OFFSET))(this, EFMODEHHJJG);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNPPBLKCJF_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void FLHNGDLANDC(::JJNPNFPGDAM EFMODEHHJJG, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::JJNPNFPGDAM, ::System::Action*))((::PBYTE)hIl2Cpp + PGNPPBLKCJF_FLHNGDLANDC_OFFSET))(this, EFMODEHHJJG, GJBHEJGENMI);
	}
};
