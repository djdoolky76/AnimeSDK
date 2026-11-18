#pragma once
#include "unitysdk/unitysdk.h"

class ECAECGNKADI;
class KNHEKDKJAJN;

#define FPLAGCAJJEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x125BA190)
#define FPLAGCAJJEA_DPCDHOOCBIP_OFFSET UNITYSDK_OFFSET(0x125BA3A0)
#define FPLAGCAJJEA_ONCREATE_OFFSET UNITYSDK_OFFSET(0x125BA1D0)
#define FPLAGCAJJEA_UPDATE_OFFSET UNITYSDK_OFFSET(0x125BA210)
#define FPLAGCAJJEA__CTOR_OFFSET UNITYSDK_OFFSET(0x125BA350)

inline static constexpr unsigned int FPLAGCAJJEA_TypeDefinitionIndex = 85597;

class FPLAGCAJJEA
{
public:
	::KNHEKDKJAJN* BOBPLLBOODN; // 0x10
	::ECAECGNKADI* AEHDGDMFFIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLAGCAJJEA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLAGCAJJEA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLAGCAJJEA_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPLAGCAJJEA_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void DPCDHOOCBIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLAGCAJJEA_DPCDHOOCBIP_OFFSET))(this);
	}
};
