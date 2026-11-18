#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/LICBHCFJLNF.h"

#define GEJLNNBAPPC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x116EB7E0)
#define GEJLNNBAPPC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x116EB870)
#define GEJLNNBAPPC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x116EB700)
#define GEJLNNBAPPC__CTOR_OFFSET UNITYSDK_OFFSET(0x116EB7D0)

inline static constexpr unsigned int GEJLNNBAPPC_TypeDefinitionIndex = 83654;

class GEJLNNBAPPC : public ::LICBHCFJLNF
{
public:
	::JGLIFHIAIEH LLOJCOLCKJL; // 0x10
	::System::UInt32 MNAIIBHLHMA; // 0x18
	::JGLIFHIAIEH JAPACFEMANE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLNNBAPPC__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLNNBAPPC_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLNNBAPPC_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::GEJLNNBAPPC* BBPCBEEHALC()
	{
		return ((::GEJLNNBAPPC*(*)())((::PBYTE)hIl2Cpp + GEJLNNBAPPC_BBPCBEEHALC_OFFSET))();
	}
};
