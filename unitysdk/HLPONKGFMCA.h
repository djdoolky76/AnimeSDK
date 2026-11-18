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

#define HLPONKGFMCA_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x15B6B960)
#define HLPONKGFMCA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B6B8F0)
#define HLPONKGFMCA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B6B6E0)
#define HLPONKGFMCA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B6C750)
#define HLPONKGFMCA_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15B6C6B0)
#define HLPONKGFMCA_KNCMPEJPPKK_OFFSET UNITYSDK_OFFSET(0x15B6C5D0)
#define HLPONKGFMCA_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15B6B590)
#define HLPONKGFMCA_NDKKGPAOJLK_OFFSET UNITYSDK_OFFSET(0x15B6C250)
#define HLPONKGFMCA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6C040)

inline static constexpr unsigned int HLPONKGFMCA_TypeDefinitionIndex = 52892;

class HLPONKGFMCA : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* CJNEMGNJIEI; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JLACDANBCAN; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x38
	::CPABOPKIGAL* PKKLIFFIMMB; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HLPONKGFMCA_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HLPONKGFMCA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void NDKKGPAOJLK(::System::UInt32 AOCOIDIMLIH, ::System::Collections::Generic::List_1<::System::Int32>* ONNBCPJLPKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HLPONKGFMCA_NDKKGPAOJLK_OFFSET))(this, AOCOIDIMLIH, ONNBCPJLPKD);
	}

	static ::Cysharp::Threading::Tasks::UniTask KNCMPEJPPKK(::HOCDHMEPPEG MMCKPLBLCIL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::HOCDHMEPPEG))((::PBYTE)hIl2Cpp + HLPONKGFMCA_KNCMPEJPPKK_OFFSET))(MMCKPLBLCIL);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + HLPONKGFMCA_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HLPONKGFMCA_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA_GDEOPIBNOIN_OFFSET))(this);
	}
};
