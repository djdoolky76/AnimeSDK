#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define IMFIAOJKDHD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1870F360)
#define IMFIAOJKDHD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1870F2D0)
#define IMFIAOJKDHD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1870F1E0)
#define IMFIAOJKDHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1870F2C0)

inline static constexpr unsigned int IMFIAOJKDHD_TypeDefinitionIndex = 55138;

class IMFIAOJKDHD : public ::KCIPADHDIIN
{
public:
	::System::UInt64 MPNCFAKNOOD; // 0x10
	::System::UInt32 APONONFAAIA; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 JEFGDCHDAJN; // 0x20
	::System::UInt64 NGEFMHCFAPK; // 0x28
	::System::UInt64 DOPFMGOEFFG; // 0x30
	::System::UInt32 DFBFJOEAIMP; // 0x38
	::System::UInt32 EIPCGGPOHDD; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFIAOJKDHD__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFIAOJKDHD_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::IMFIAOJKDHD* BBPCBEEHALC()
	{
		return ((::IMFIAOJKDHD*(*)())((::PBYTE)hIl2Cpp + IMFIAOJKDHD_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFIAOJKDHD_ANEOCOIFDDJ_OFFSET))(this);
	}
};
