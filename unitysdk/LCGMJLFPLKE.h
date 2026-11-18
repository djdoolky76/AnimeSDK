#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define LCGMJLFPLKE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1A2EBE40)
#define LCGMJLFPLKE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A2EBDD0)
#define LCGMJLFPLKE_FCCKIACKDGL_OFFSET UNITYSDK_OFFSET(0x1A2ECCC0)
#define LCGMJLFPLKE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A2EBB60)
#define LCGMJLFPLKE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A2ECC20)
#define LCGMJLFPLKE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1A2ECC30)
#define LCGMJLFPLKE_KOCLKMEJOMP_OFFSET UNITYSDK_OFFSET(0x1A2EC8A0)
#define LCGMJLFPLKE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1A2EB790)
#define LCGMJLFPLKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EC620)

inline static constexpr unsigned int LCGMJLFPLKE_TypeDefinitionIndex = 66101;

class LCGMJLFPLKE : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* AJCPNCIMKGC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x30
	::CPABOPKIGAL* PKKLIFFIMMB; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x40
	::CPABOPKIGAL* CJNEMGNJIEI; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JLACDANBCAN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void KOCLKMEJOMP(::System::UInt32 AOCOIDIMLIH, ::System::Collections::Generic::List_1<::System::Int32>* ONNBCPJLPKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_KOCLKMEJOMP_OFFSET))(this, AOCOIDIMLIH, ONNBCPJLPKD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::Cysharp::Threading::Tasks::UniTask FCCKIACKDGL(::HOCDHMEPPEG CGJOHGLPDBP, ::HOCDHMEPPEG MMCKPLBLCIL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::HOCDHMEPPEG, ::HOCDHMEPPEG))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_FCCKIACKDGL_OFFSET))(CGJOHGLPDBP, MMCKPLBLCIL);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
