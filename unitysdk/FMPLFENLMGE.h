#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FMPLFENLMGE_DLPHGODBHGC_OFFSET UNITYSDK_OFFSET(0x11C72410)
#define FMPLFENLMGE_GACGEOABCED_OFFSET UNITYSDK_OFFSET(0x11C724B0)
#define FMPLFENLMGE_HKHNKFGBGFG_OFFSET UNITYSDK_OFFSET(0x11C72460)

inline static constexpr unsigned int FMPLFENLMGE_TypeDefinitionIndex = 43062;

class FMPLFENLMGE : public ::System::Object
{
public:
	static ::System::Int32 DLPHGODBHGC(::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMPLFENLMGE_DLPHGODBHGC_OFFSET))(OLAIAPANMKD);
	}

	static ::System::Boolean HKHNKFGBGFG(::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMPLFENLMGE_HKHNKFGBGFG_OFFSET))(OLAIAPANMKD);
	}

	static ::System::Boolean GACGEOABCED(::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMPLFENLMGE_GACGEOABCED_OFFSET))(OLAIAPANMKD);
	}
};
