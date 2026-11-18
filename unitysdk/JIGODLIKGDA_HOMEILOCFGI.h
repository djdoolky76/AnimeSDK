#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOGADEDMKCC;
class IDBKPBPNDHG;

#define JIGODLIKGDA_HOMEILOCFGI_HLIIDEEGPAH_OFFSET UNITYSDK_OFFSET(0x198CB530)
#define JIGODLIKGDA_HOMEILOCFGI_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x198CB4E0)
#define JIGODLIKGDA_HOMEILOCFGI_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x198CB630)
#define JIGODLIKGDA_HOMEILOCFGI__CTOR_OFFSET UNITYSDK_OFFSET(0x198CB4D0)

inline static constexpr unsigned int JIGODLIKGDA_HOMEILOCFGI_TypeDefinitionIndex = 58741;

class JIGODLIKGDA_HOMEILOCFGI : public ::System::Object
{
public:
	::IDBKPBPNDHG* LIMFDMBEDHG; // 0x10
	::GOGADEDMKCC* CPFPNCMFEMO; // 0x18
	::System::Boolean JJHNBHHAENC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_HOMEILOCFGI__CTOR_OFFSET))(this);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_HOMEILOCFGI_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void HLIIDEEGPAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_HOMEILOCFGI_HLIIDEEGPAH_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ(::System::Boolean LAGLIIKCGGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIGODLIKGDA_HOMEILOCFGI_PGHAJOMNDDJ_OFFSET))(this, LAGLIIKCGGC);
	}
};
