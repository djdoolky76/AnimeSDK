#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TeamTowers { class TeamTowersDepartmentData; }

#define LGGELBFHJIM___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB693430)
#define LGGELBFHJIM___C__DISPLAYCLASS3_0__GETDEPARTMENTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB6955D0)

	class LGGELBFHJIM___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 departmentID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGELBFHJIM___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDepartmentData_b__0(::RPG::Client::TeamTowers::TeamTowersDepartmentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersDepartmentData*))((::PBYTE)hIl2Cpp + LGGELBFHJIM___C__DISPLAYCLASS3_0__GETDEPARTMENTDATA_B__0_OFFSET))(this, a1);
		}

	};
