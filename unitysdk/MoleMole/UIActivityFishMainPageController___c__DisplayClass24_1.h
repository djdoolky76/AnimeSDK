#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class PLDJFGCHMKK;

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E985C0)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHFINALREWARD_B__2_OFFSET UNITYSDK_OFFSET(0x17E985D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController___c__DisplayClass24_1_TypeDefinitionIndex = 46847;

	template <typename T>
	class UIActivityFishMainPageController___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::PLDJFGCHMKK* reward; // 0x10
		::HGAJKHIMKJP* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshFinalReward_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER___C__DISPLAYCLASS24_1__REFRESHFINALREWARD_B__2_OFFSET))(this);
		}
	};
}
