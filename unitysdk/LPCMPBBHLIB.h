#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LPCMPBBHLIB_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x15905960)
#define LPCMPBBHLIB_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x15905AC0)
#define LPCMPBBHLIB_KPJMHMENNGJ_OFFSET UNITYSDK_OFFSET(0x15905790)
#define LPCMPBBHLIB_NHODMOOEGMD_OFFSET UNITYSDK_OFFSET(0x15905880)
#define LPCMPBBHLIB_PDDFMEPDDHM_OFFSET UNITYSDK_OFFSET(0x159059D0)
#define LPCMPBBHLIB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x159058F0)
#define LPCMPBBHLIB__CTOR_OFFSET UNITYSDK_OFFSET(0x15905770)

inline static constexpr unsigned int LPCMPBBHLIB_TypeDefinitionIndex = 49369;

class LPCMPBBHLIB : public ::System::Object
{
public:
	::System::Single CJLKFOGFONE; // 0x10
	::System::Single CCHOENHKMLF; // 0x14
	::System::Single IHNCBJDELMO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCMPBBHLIB__CTOR_OFFSET))(this);
	}

	::System::Boolean KPJMHMENNGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCMPBBHLIB_KPJMHMENNGJ_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCMPBBHLIB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCMPBBHLIB_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Boolean NHODMOOEGMD(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCMPBBHLIB_NHODMOOEGMD_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Boolean PDDFMEPDDHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCMPBBHLIB_PDDFMEPDDHM_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCMPBBHLIB_EDEFLFIKNFK_OFFSET))(this);
	}
};
