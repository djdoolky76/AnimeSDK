#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FDJDJKFDACG_AEAKGPICJLA_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define FDJDJKFDACG_FGJGHDBCLJE_OFFSET UNITYSDK_OFFSET(0x359150)
#define FDJDJKFDACG_KCMOOPIPDDF_OFFSET UNITYSDK_OFFSET(0x359320)
#define FDJDJKFDACG_LNCOKGCICMA_OFFSET UNITYSDK_OFFSET(0x3CE9E0)

inline static constexpr unsigned int FDJDJKFDACG_TypeDefinitionIndex = 86295;

struct alignas(4) FDJDJKFDACG
{
	::System::Int32 _GBAEKEEKEJB_k__BackingField; // 0x10
	::System::Int32 _PFFNOPJKKEG_k__BackingField; // 0x14

	::System::Void FGJGHDBCLJE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDJDJKFDACG_FGJGHDBCLJE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AEAKGPICJLA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDJDJKFDACG_AEAKGPICJLA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LNCOKGCICMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJDJKFDACG_LNCOKGCICMA_OFFSET))(this);
	}

	::System::Int32 KCMOOPIPDDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJDJKFDACG_KCMOOPIPDDF_OFFSET))(this);
	}
};
