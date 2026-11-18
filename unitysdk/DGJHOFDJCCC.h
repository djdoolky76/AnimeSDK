#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

class KBBMNEOODNE;

#define DGJHOFDJCCC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15A3D590)
#define DGJHOFDJCCC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x15A3D500)
#define DGJHOFDJCCC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x15A3D400)
#define DGJHOFDJCCC__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3D4F0)

inline static constexpr unsigned int DGJHOFDJCCC_TypeDefinitionIndex = 74589;

class DGJHOFDJCCC : public ::LICBHCFJLNF
{
public:
	::KBBMNEOODNE* NJDJBEKLLLE; // 0x10
	::System::UInt32 DPGCKBEJLJD; // 0x18
	::System::UInt32 IFPCGBJDKCH; // 0x1C
	::System::UInt32 MNAIIBHLHMA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJHOFDJCCC__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJHOFDJCCC_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::DGJHOFDJCCC* BBPCBEEHALC()
	{
		return ((::DGJHOFDJCCC*(*)())((::PBYTE)hIl2Cpp + DGJHOFDJCCC_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJHOFDJCCC_ANEOCOIFDDJ_OFFSET))(this);
	}
};
