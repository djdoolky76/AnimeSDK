#pragma once
#include "unitysdk/unitysdk.h"

class ILGGMFDKGPC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define FFBGEAKBACO_AKPKACFCBOA_OFFSET UNITYSDK_OFFSET(0x11D035D0)
#define FFBGEAKBACO_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x11D037C0)
#define FFBGEAKBACO_GFFDLGPCPHM_1_OFFSET UNITYSDK_OFFSET(0x11D037D0)
#define FFBGEAKBACO_GFFDLGPCPHM_OFFSET UNITYSDK_OFFSET(0x11D03660)
#define FFBGEAKBACO_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x11D035A0)
#define FFBGEAKBACO_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x11D035B0)
#define FFBGEAKBACO_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11D030D0)
#define FFBGEAKBACO_ONDETACH_OFFSET UNITYSDK_OFFSET(0x11D03210)
#define FFBGEAKBACO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11D03390)
#define FFBGEAKBACO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11D034A0)
#define FFBGEAKBACO_PLBMFBONCEG_OFFSET UNITYSDK_OFFSET(0x11D035C0)
#define FFBGEAKBACO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D03510)

inline static constexpr unsigned int FFBGEAKBACO_TypeDefinitionIndex = 50001;

class FFBGEAKBACO
{
public:
	::System::Threading::CancellationTokenSource* ELACFNLBHHH; // 0x28
	::System::Collections::Generic::List_1<::ILGGMFDKGPC*>* MBIMGFHOJCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_ONCREATE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_ONDETACH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void PLBMFBONCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_PLBMFBONCEG_OFFSET))(this);
	}

	::System::Void AKPKACFCBOA(::ILGGMFDKGPC* JMJBMGHEPBG)
	{
		return ((::System::Void(*)(::PVOID, ::ILGGMFDKGPC*))((::PBYTE)hIl2Cpp + FFBGEAKBACO_AKPKACFCBOA_OFFSET))(this, JMJBMGHEPBG);
	}

	::ILGGMFDKGPC* GFFDLGPCPHM(::System::Int32 DEFAKCIAKLG)
	{
		return ((::ILGGMFDKGPC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFBGEAKBACO_GFFDLGPCPHM_OFFSET))(this, DEFAKCIAKLG);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGEAKBACO_ANEOCOIFDDJ_OFFSET))(this);
	}

	::ILGGMFDKGPC* GFFDLGPCPHM_1(::System::String* HFONKKCIEBH)
	{
		return ((::ILGGMFDKGPC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFBGEAKBACO_GFFDLGPCPHM_1_OFFSET))(this, HFONKKCIEBH);
	}
};
