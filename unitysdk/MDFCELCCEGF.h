#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MDFCELCCEGF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E22090)
#define MDFCELCCEGF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E21E20)
#define MDFCELCCEGF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E22550)
#define MDFCELCCEGF_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15E224C0)
#define MDFCELCCEGF_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15E21CD0)
#define MDFCELCCEGF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E222B0)

inline static constexpr unsigned int MDFCELCCEGF_TypeDefinitionIndex = 41156;

class MDFCELCCEGF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* GJNBFDLIHFD; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* NOCOPPHDKDK; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* BMLJAGANJBL; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* ICEFMCCBGPP; // 0x40
	::KCMIFNGABDC_1<::System::String*>* HMDCKLJFAED; // 0x48
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCELCCEGF__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MDFCELCCEGF_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCELCCEGF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDFCELCCEGF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MDFCELCCEGF_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFCELCCEGF_GDEOPIBNOIN_OFFSET))(this);
	}
};
