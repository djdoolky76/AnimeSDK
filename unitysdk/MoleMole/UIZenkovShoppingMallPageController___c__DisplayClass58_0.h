#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLCANMDPJBC;

#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBEE90)
#define MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS58_0__ONTABGROUPSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x12FBEEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShoppingMallPageController___c__DisplayClass58_0_TypeDefinitionIndex = 92330;

	class UIZenkovShoppingMallPageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::JLCANMDPJBC* groupData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnTabGroupScrollItemUpdate_b__0(::System::Int32 _)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHOPPINGMALLPAGECONTROLLER___C__DISPLAYCLASS58_0__ONTABGROUPSCROLLITEMUPDATE_B__0_OFFSET))(this, _);
		}
	};
}
