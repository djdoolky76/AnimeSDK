#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EBIAIBDMAGK_AHJCKHIDPDG_OFFSET UNITYSDK_OFFSET(0x134999C0)
#define EBIAIBDMAGK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x134997A0)
#define EBIAIBDMAGK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13499650)
#define EBIAIBDMAGK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13499D00)
#define EBIAIBDMAGK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x13499C70)
#define EBIAIBDMAGK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x13499500)
#define EBIAIBDMAGK__CTOR_OFFSET UNITYSDK_OFFSET(0x13499B40)

inline static constexpr unsigned int EBIAIBDMAGK_TypeDefinitionIndex = 91943;

class EBIAIBDMAGK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* POEFJNKFGME; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HHGLDOKNPCK; // 0x30
	::KCMIFNGABDC_1<::System::String*>* BECGFIIHHAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIAIBDMAGK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + EBIAIBDMAGK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIAIBDMAGK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EBIAIBDMAGK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + EBIAIBDMAGK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AHJCKHIDPDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIAIBDMAGK_AHJCKHIDPDG_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIAIBDMAGK_GDEOPIBNOIN_OFFSET))(this);
	}
};
