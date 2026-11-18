#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFCGMKDMKHH;

#define DFCGMKDMKHH_IFIPCFPHDEL_AMIBFBBDLGI_OFFSET UNITYSDK_OFFSET(0x193FD590)
#define DFCGMKDMKHH_IFIPCFPHDEL_EFABDDOIIPI_OFFSET UNITYSDK_OFFSET(0x193FD620)
#define DFCGMKDMKHH_IFIPCFPHDEL_IHHPNFLPMEL_OFFSET UNITYSDK_OFFSET(0x193FD5C0)
#define DFCGMKDMKHH_IFIPCFPHDEL_MEDMEBCOBOD_OFFSET UNITYSDK_OFFSET(0x193FD650)
#define DFCGMKDMKHH_IFIPCFPHDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x193FD580)

inline static constexpr unsigned int DFCGMKDMKHH_IFIPCFPHDEL_TypeDefinitionIndex = 69376;

class DFCGMKDMKHH_IFIPCFPHDEL : public ::System::Object
{
public:
	::DFCGMKDMKHH* KLHPEBKNIFB; // 0x10
	::System::Single GKAOHBNJJJC; // 0x18
	::System::Single FNDGICFLLFH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_IFIPCFPHDEL__CTOR_OFFSET))(this);
	}

	::System::Void AMIBFBBDLGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_IFIPCFPHDEL_AMIBFBBDLGI_OFFSET))(this);
	}

	::System::Single IHHPNFLPMEL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_IFIPCFPHDEL_IHHPNFLPMEL_OFFSET))(this);
	}

	::System::Void EFABDDOIIPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_IFIPCFPHDEL_EFABDDOIIPI_OFFSET))(this);
	}

	::System::Single MEDMEBCOBOD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCGMKDMKHH_IFIPCFPHDEL_MEDMEBCOBOD_OFFSET))(this);
	}
};
