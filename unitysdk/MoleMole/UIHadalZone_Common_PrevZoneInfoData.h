#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EPKCOBKIJPH;

#define MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FAD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_PrevZoneInfoData_TypeDefinitionIndex = 50976;

	class UIHadalZone_Common_PrevZoneInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EPKCOBKIJPH* prevRecord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_PREVZONEINFODATA__CTOR_OFFSET))(this);
		}
	};
}
