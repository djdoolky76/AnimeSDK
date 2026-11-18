#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS149_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC7000)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS149_0__ONSTRATEGYBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x14CC7010)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass149_0_TypeDefinitionIndex = 59212;

	class UIRoleSelectPageController___c__DisplayClass149_0 : public ::System::Object
	{
	public:
		::System::Boolean isPreviewMode; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 avatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS149_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStrategyBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS149_0__ONSTRATEGYBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
