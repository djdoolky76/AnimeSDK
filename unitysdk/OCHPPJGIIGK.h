#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/LICBHCFJLNF.h"

#define OCHPPJGIIGK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13A4A800)
#define OCHPPJGIIGK_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x13A4A890)
#define OCHPPJGIIGK_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x13A4A720)
#define OCHPPJGIIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4A7F0)

inline static constexpr unsigned int OCHPPJGIIGK_TypeDefinitionIndex = 39480;

class OCHPPJGIIGK : public ::LICBHCFJLNF
{
public:
	::JGLIFHIAIEH LLOJCOLCKJL; // 0x10
	::JGLIFHIAIEH JAPACFEMANE; // 0x18
	::System::UInt32 MNAIIBHLHMA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPPJGIIGK__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPPJGIIGK_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHPPJGIIGK_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::OCHPPJGIIGK* BBPCBEEHALC()
	{
		return ((::OCHPPJGIIGK*(*)())((::PBYTE)hIl2Cpp + OCHPPJGIIGK_BBPCBEEHALC_OFFSET))();
	}
};
