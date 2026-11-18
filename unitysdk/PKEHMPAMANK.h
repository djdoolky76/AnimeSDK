#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define PKEHMPAMANK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1C660E30)
#define PKEHMPAMANK_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1C660EC0)
#define PKEHMPAMANK_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1C660D50)
#define PKEHMPAMANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C660E20)

inline static constexpr unsigned int PKEHMPAMANK_TypeDefinitionIndex = 79770;

class PKEHMPAMANK : public ::LICBHCFJLNF
{
public:
	::System::UInt32 JOCOFFGOBND; // 0x10
	::System::UInt32 GEAJDPPEJHE; // 0x14
	::System::UInt32 PCBDNKELNMK; // 0x18
	::System::UInt32 FJOIFHFMBCA; // 0x1C
	::System::UInt32 DLLFBPLMGOB; // 0x20
	::System::UInt32 FBCBELLFEKI; // 0x24
	::System::UInt32 HGPCGBPPJBD; // 0x28
	::System::UInt32 EEKAOFHHEGM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEHMPAMANK__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEHMPAMANK_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEHMPAMANK_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::PKEHMPAMANK* BBPCBEEHALC()
	{
		return ((::PKEHMPAMANK*(*)())((::PBYTE)hIl2Cpp + PKEHMPAMANK_BBPCBEEHALC_OFFSET))();
	}
};
