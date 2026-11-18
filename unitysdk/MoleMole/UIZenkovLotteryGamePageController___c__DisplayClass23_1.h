#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;

#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3FC90)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS23_1__INITREWARDPREVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x13B3FCA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGamePageController___c__DisplayClass23_1_TypeDefinitionIndex = 57270;

	template <typename T>
	class UIZenkovLotteryGamePageController___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitRewardPreview_b__2(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEPAGECONTROLLER___C__DISPLAYCLASS23_1__INITREWARDPREVIEW_B__2_OFFSET))(this, ctrl);
		}
	};
}
