#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFEKBBCCCFE;

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x179AC7D0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__REFRESHTOPTABS_B__0_OFFSET UNITYSDK_OFFSET(0x179AC7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass49_1_TypeDefinitionIndex = 77073;

	template <typename T>
	class UIRidusGotBooSelectLevelPageController___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::System::Int32 levelType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTopTabs_b__0(::MFEKBBCCCFE* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFEKBBCCCFE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_1__REFRESHTOPTABS_B__0_OFFSET))(this, x);
		}
	};
}
