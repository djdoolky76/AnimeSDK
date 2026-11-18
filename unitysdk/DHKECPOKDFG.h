#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDEAJMNFOBH.h"
#include "unitysdk/HIFCFIFMLCD.h"
#include "unitysdk/System/ValueType.h"

class AKKDGABKFGP;

#define DHKECPOKDFG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6EEBE0)

inline static constexpr unsigned int DHKECPOKDFG_TypeDefinitionIndex = 73549;

struct alignas(8) DHKECPOKDFG
{
	::FDEAJMNFOBH EAJKOJNHNPB; // 0x10
	::FDEAJMNFOBH OCEEJBCHJLG; // 0x14
	::AKKDGABKFGP* BFNEHPEMEEC; // 0x18
	::HIFCFIFMLCD DIGJOCLJDCM; // 0x20

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKECPOKDFG_NPOLNFDBOOD_OFFSET))(this);
	}
};
