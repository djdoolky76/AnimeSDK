#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JIGCAHMLJAH;

#define MOLEMOLE_UIHADALZONE_COMMON_ZONEITEMINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173D72B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_ZoneItemInfoData_TypeDefinitionIndex = 50973;

	class UIHadalZone_Common_ZoneItemInfoData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIGCAHMLJAH* entranceData; // 0x28
		::System::Boolean isSelected; // 0x30
		::System::Boolean isValid; // 0x31
		::System::Boolean isLockButCanClick; // 0x32
		::System::Byte _padding0[0x1];
		::System::Int32 entranceID; // 0x34
		::System::Int32 curZoneID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_ZONEITEMINFODATA__CTOR_OFFSET))(this);
		}
	};
}
