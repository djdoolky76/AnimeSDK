#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E90D8497136ADE0B.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F49E313E2A78B9FC_EADBDB1EB3C92F4B_OFFSET UNITYSDK_OFFSET(0x1BD15A0)
#define F49E313E2A78B9FC_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x1BD1660)
#define F49E313E2A78B9FC_FD258DFBF6263A71_OFFSET UNITYSDK_OFFSET(0x1BD1450)
#define F49E313E2A78B9FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1650)

inline static constexpr unsigned int F49E313E2A78B9FC_TypeDefinitionIndex = 263;

class F49E313E2A78B9FC : public ::E90D8497136ADE0B
{
public:
	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F49E313E2A78B9FC_EAE41585CEDA7352_OFFSET))(this);
	}

	::System::Void FD258DFBF6263A71(::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>* F7FE102B6F47DC9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AD61077CFCBEFAEA>*))((::PBYTE)hIl2Cpp + F49E313E2A78B9FC_FD258DFBF6263A71_OFFSET))(this, F7FE102B6F47DC9D);
	}

	::System::Void EADBDB1EB3C92F4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F49E313E2A78B9FC_EADBDB1EB3C92F4B_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F49E313E2A78B9FC__CTOR_OFFSET))(this);
	}
};
