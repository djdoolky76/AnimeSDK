#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAOFHEPOEPE_GNJJBKFLPBF;

#define MAOFHEPOEPE_HBJBKFGEPKN_HFNBPPJAFMP_OFFSET UNITYSDK_OFFSET(0x14DD85A0)
#define MAOFHEPOEPE_HBJBKFGEPKN_HOBGJHOJLJD_OFFSET UNITYSDK_OFFSET(0x14DD8510)
#define MAOFHEPOEPE_HBJBKFGEPKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD8500)

inline static constexpr unsigned int MAOFHEPOEPE_HBJBKFGEPKN_TypeDefinitionIndex = 83249;

class MAOFHEPOEPE_HBJBKFGEPKN : public ::System::Object
{
public:
	::MAOFHEPOEPE_GNJJBKFLPBF* EEMOEMFLABI; // 0x10
	::System::Boolean HPLGDPFHFJC; // 0x18
	::System::Boolean PPCBIEHAMDE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_HBJBKFGEPKN__CTOR_OFFSET))(this);
	}

	::System::Void HOBGJHOJLJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_HBJBKFGEPKN_HOBGJHOJLJD_OFFSET))(this);
	}

	::System::Void HFNBPPJAFMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFHEPOEPE_HBJBKFGEPKN_HFNBPPJAFMP_OFFSET))(this);
	}
};
