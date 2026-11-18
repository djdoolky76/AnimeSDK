#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define IJKPADCDJBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16AA04E0)
#define IJKPADCDJBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16AA02D0)
#define IJKPADCDJBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16AA0980)
#define IJKPADCDJBP_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16AA0990)
#define IJKPADCDJBP_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16AA0180)
#define IJKPADCDJBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA07B0)

inline static constexpr unsigned int IJKPADCDJBP_TypeDefinitionIndex = 90802;

class IJKPADCDJBP : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* OJBMNLAJJLC; // 0x28
	::KCMIFNGABDC_1<::MoleMole::BubbleGraphStruct>* GMLPNCMCJDE; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* FBBJJDMEEDG; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* EEIOGFGPHLJ; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* LJDLFAAOIAM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKPADCDJBP__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IJKPADCDJBP_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKPADCDJBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IJKPADCDJBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKPADCDJBP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IJKPADCDJBP_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
