#pragma once
#include "unitysdk/unitysdk.h"

class DFEFCOAAPGK;
class JGNPOMIAMOI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOMGDKGNIKN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1F68FEA0)
#define MOMGDKGNIKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F68FDD0)
#define MOMGDKGNIKN_EILHANNLKFD_OFFSET UNITYSDK_OFFSET(0x1F68FE90)
#define MOMGDKGNIKN_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x1F690090)
#define MOMGDKGNIKN_FCAFFLMEDBF_OFFSET UNITYSDK_OFFSET(0x1F6900A0)
#define MOMGDKGNIKN_PKJAPBHLOBM_OFFSET UNITYSDK_OFFSET(0x1F68FEE0)
#define MOMGDKGNIKN_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1F690040)
#define MOMGDKGNIKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F68FE10)

inline static constexpr unsigned int MOMGDKGNIKN_TypeDefinitionIndex = 94899;

class MOMGDKGNIKN
{
public:
	::DFEFCOAAPGK* NAEFJGAOJCB; // 0x10
	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* KJJPINNJBDF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_DISPOSE_OFFSET))(this);
	}

	::System::Void EILHANNLKFD(::DFEFCOAAPGK* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_EILHANNLKFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void PKJAPBHLOBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_PKJAPBHLOBM_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_PLPONJAKNEB_OFFSET))(this);
	}

	::DFEFCOAAPGK* EODBBODDHIL()
	{
		return ((::DFEFCOAAPGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_EODBBODDHIL_OFFSET))(this);
	}

	::System::Void FCAFFLMEDBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMGDKGNIKN_FCAFFLMEDBF_OFFSET))(this);
	}
};
