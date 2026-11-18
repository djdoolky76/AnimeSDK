#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class KCCDJGBJGLD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define KKIKLJAKAPH_AEOJEHMOPDG_OFFSET UNITYSDK_OFFSET(0x16349C00)
#define KKIKLJAKAPH_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x16349CE0)
#define KKIKLJAKAPH_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16349FE0)
#define KKIKLJAKAPH_APEEIKLAFMB_OFFSET UNITYSDK_OFFSET(0x16349AE0)
#define KKIKLJAKAPH_BENMOCLCDME_OFFSET UNITYSDK_OFFSET(0x16349D60)
#define KKIKLJAKAPH_DGNFONCFKOK_OFFSET UNITYSDK_OFFSET(0x163498B0)
#define KKIKLJAKAPH_DHFONHOOIKM_OFFSET UNITYSDK_OFFSET(0x16349AC0)
#define KKIKLJAKAPH_FJBNBHJPGNJ_OFFSET UNITYSDK_OFFSET(0x16349FF0)
#define KKIKLJAKAPH_FNFEOFDGGJP_OFFSET UNITYSDK_OFFSET(0x16349290)
#define KKIKLJAKAPH_GLOKANKLFPI_OFFSET UNITYSDK_OFFSET(0x16349C10)
#define KKIKLJAKAPH_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x16349BF0)
#define KKIKLJAKAPH_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x16349AD0)
#define KKIKLJAKAPH_INCCBPIOMEH_OFFSET UNITYSDK_OFFSET(0x16349A20)
#define KKIKLJAKAPH_JMLLEEMHEHK_OFFSET UNITYSDK_OFFSET(0x16349A30)
#define KKIKLJAKAPH_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1634A3E0)
#define KKIKLJAKAPH_LGBIGGOKPIL_OFFSET UNITYSDK_OFFSET(0x16349CC0)
#define KKIKLJAKAPH_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x16349CD0)
#define KKIKLJAKAPH_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x1634A3D0)
#define KKIKLJAKAPH_MMLHPJCLAKL_OFFSET UNITYSDK_OFFSET(0x16349D40)
#define KKIKLJAKAPH_NAPNNHMIGIJ_OFFSET UNITYSDK_OFFSET(0x16348E90)
#define KKIKLJAKAPH_ODGGMLLAKPP_OFFSET UNITYSDK_OFFSET(0x16349840)
#define KKIKLJAKAPH_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16348C90)
#define KKIKLJAKAPH_ONDETACH_OFFSET UNITYSDK_OFFSET(0x16348F80)
#define KKIKLJAKAPH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16349350)
#define KKIKLJAKAPH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16349000)
#define KKIKLJAKAPH_ONREADY_OFFSET UNITYSDK_OFFSET(0x16349520)
#define KKIKLJAKAPH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16348B80)
#define KKIKLJAKAPH_PKNOGOPAIBC_OFFSET UNITYSDK_OFFSET(0x16349D50)
#define KKIKLJAKAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x163499E0)

inline static constexpr unsigned int KKIKLJAKAPH_TypeDefinitionIndex = 55561;

class KKIKLJAKAPH
{
public:
	::System::Threading::CancellationTokenSource* KGDDIGFIPDK; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* JLIKJFNACIB; // 0x30
	::System::String* BKGFGJLEMDP; // 0x38
	::System::Threading::CancellationTokenSource* PJNJEBFCCAM; // 0x40
	::KCCDJGBJGLD* _BFKOFBFFGKJ_k__BackingField; // 0x48
	::System::Int32 PCKBJPLJHCG; // 0x50
	::System::Boolean _DKDEGPGLCOG_k__BackingField; // 0x54
	::System::Boolean _MJPHHDNPMFG_k__BackingField; // 0x55
	::System::Boolean LGGDNJDEEJB; // 0x56

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ONREADY_OFFSET))(this);
	}

	::System::Void INCCBPIOMEH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_INCCBPIOMEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JMLLEEMHEHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_JMLLEEMHEHK_OFFSET))(this);
	}

	::System::Void DHFONHOOIKM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_DHFONHOOIKM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ILHIIDBCNEC_OFFSET))(this);
	}

	static ::System::Boolean APEEIKLAFMB(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_APEEIKLAFMB_OFFSET))(AMNIHACKELI);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_GONGHOPLHBD_OFFSET))(this);
	}

	::System::Boolean AEOJEHMOPDG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_AEOJEHMOPDG_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask GLOKANKLFPI(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_GLOKANKLFPI_OFFSET))(AMNIHACKELI);
	}

	::System::Boolean LGBIGGOKPIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_LGBIGGOKPIL_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_LIBFEFEJOCF_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask NAPNNHMIGIJ(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::String* INHDAAAMAAL, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_NAPNNHMIGIJ_OFFSET))(AMNIHACKELI, INHDAAAMAAL, INAFPBGPAMP, OMMEALOOOOD);
	}

	::System::Void AMEGHCHMIOD(::System::String* AJAEMAHOIKL, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* MHAOJDIBGMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_AMEGHCHMIOD_OFFSET))(this, AJAEMAHOIKL, MHAOJDIBGMP);
	}

	::System::Void DGNFONCFKOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_DGNFONCFKOK_OFFSET))(this);
	}

	::System::Void MMLHPJCLAKL(::KCCDJGBJGLD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KCCDJGBJGLD*))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_MMLHPJCLAKL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ODGGMLLAKPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ODGGMLLAKPP_OFFSET))(this);
	}

	::KCCDJGBJGLD* PKNOGOPAIBC()
	{
		return ((::KCCDJGBJGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_PKNOGOPAIBC_OFFSET))(this);
	}

	::System::Void BENMOCLCDME(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* OCKMDPLBKFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_BENMOCLCDME_OFFSET))(this, OCKMDPLBKFH);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::System::Void FJBNBHJPGNJ(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_FJBNBHJPGNJ_OFFSET))(AMNIHACKELI);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_MLMLEKKJJID_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask FNFEOFDGGJP(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::String* MHEGPBDHBMF, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_FNFEOFDGGJP_OFFSET))(AMNIHACKELI, MHEGPBDHBMF, OMMEALOOOOD);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_KDOIBCBFBAG_OFFSET))(this);
	}
};
