#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define BMGINMDKMFM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x169FCC70)
#define BMGINMDKMFM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x169FCA60)
#define BMGINMDKMFM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x169FD480)
#define BMGINMDKMFM_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x169FD3F0)
#define BMGINMDKMFM_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x169FC910)
#define BMGINMDKMFM__CTOR_OFFSET UNITYSDK_OFFSET(0x169FD220)

inline static constexpr unsigned int BMGINMDKMFM_TypeDefinitionIndex = 55273;

class BMGINMDKMFM : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* HJBOJGMKDPC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* PPCNKMNGDPC; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* NFMHHHNDMGF; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* NGJPOPMGBAB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGINMDKMFM__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + BMGINMDKMFM_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGINMDKMFM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BMGINMDKMFM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + BMGINMDKMFM_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGINMDKMFM_GDEOPIBNOIN_OFFSET))(this);
	}
};
