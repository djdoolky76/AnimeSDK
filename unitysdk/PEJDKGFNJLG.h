#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEJDKGFNJLG_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0x11974FE0)
#define PEJDKGFNJLG_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x11974FD0)
#define PEJDKGFNJLG_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x11974FC0)
#define PEJDKGFNJLG_KMHHOFKNMLD_OFFSET UNITYSDK_OFFSET(0x11974E10)
#define PEJDKGFNJLG_LDAHAFHBPBM_OFFSET UNITYSDK_OFFSET(0x11974FF0)
#define PEJDKGFNJLG_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x11974FB0)
#define PEJDKGFNJLG_ONATTACH_OFFSET UNITYSDK_OFFSET(0x11974D00)
#define PEJDKGFNJLG_ONDETACH_OFFSET UNITYSDK_OFFSET(0x11974D40)
#define PEJDKGFNJLG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11974DC0)
#define PEJDKGFNJLG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11974D80)
#define PEJDKGFNJLG__CTOR_OFFSET UNITYSDK_OFFSET(0x11974F70)

inline static constexpr unsigned int PEJDKGFNJLG_TypeDefinitionIndex = 52186;

class PEJDKGFNJLG
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FGKJGKIPMMG; // 0x28
	::System::Int32 JOECHPCHKFM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_ONDISABLE_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_AFBHCNCIKEK_OFFSET))(this);
	}

	::System::Void LDAHAFHBPBM(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_LDAHAFHBPBM_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void KMHHOFKNMLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJDKGFNJLG_KMHHOFKNMLD_OFFSET))(this);
	}
};
