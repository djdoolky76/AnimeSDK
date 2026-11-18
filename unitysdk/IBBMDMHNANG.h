#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define IBBMDMHNANG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1012C7A0)
#define IBBMDMHNANG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1012C750)
#define IBBMDMHNANG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1012C8F0)
#define IBBMDMHNANG__CTOR_OFFSET UNITYSDK_OFFSET(0x1012C8E0)

inline static constexpr unsigned int IBBMDMHNANG_TypeDefinitionIndex = 40898;

class IBBMDMHNANG : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBMDMHNANG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBMDMHNANG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IBBMDMHNANG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBMDMHNANG_GDEOPIBNOIN_OFFSET))(this);
	}
};
