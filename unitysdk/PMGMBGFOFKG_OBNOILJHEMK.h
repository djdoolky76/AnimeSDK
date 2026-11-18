#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMGMBGFOFKG_OBNOILJHEMK_AKHDBPFJKEP_OFFSET UNITYSDK_OFFSET(0x178ED3B0)
#define PMGMBGFOFKG_OBNOILJHEMK_EFJJOEFDNNB_OFFSET UNITYSDK_OFFSET(0x178ED3A0)
#define PMGMBGFOFKG_OBNOILJHEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED390)

inline static constexpr unsigned int PMGMBGFOFKG_OBNOILJHEMK_TypeDefinitionIndex = 65877;

class PMGMBGFOFKG_OBNOILJHEMK : public ::System::Object
{
public:
	::System::Boolean BFLKFFHACFG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_OBNOILJHEMK__CTOR_OFFSET))(this);
	}

	::System::Boolean EFJJOEFDNNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_OBNOILJHEMK_EFJJOEFDNNB_OFFSET))(this);
	}

	::System::Void AKHDBPFJKEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_OBNOILJHEMK_AKHDBPFJKEP_OFFSET))(this);
	}
};
