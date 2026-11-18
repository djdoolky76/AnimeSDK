#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define KPBMLEGDDIE_PIOGPEJBHCN_IDMCLKNFCJC_OFFSET UNITYSDK_OFFSET(0x13C8A3E0)
#define KPBMLEGDDIE_PIOGPEJBHCN__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8A3D0)

inline static constexpr unsigned int KPBMLEGDDIE_PIOGPEJBHCN_TypeDefinitionIndex = 77433;

class KPBMLEGDDIE_PIOGPEJBHCN : public ::System::Object
{
public:
	::IBENDELLLAO* CBPIMBAAIPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBMLEGDDIE_PIOGPEJBHCN__CTOR_OFFSET))(this);
	}

	::System::Void IDMCLKNFCJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBMLEGDDIE_PIOGPEJBHCN_IDMCLKNFCJC_OFFSET))(this);
	}
};
