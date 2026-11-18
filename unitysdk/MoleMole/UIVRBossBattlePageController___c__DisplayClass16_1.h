#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFMDDIOEJGI.h"

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167EF8A0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__5_OFFSET UNITYSDK_OFFSET(0x167EF8B0)
#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__6_OFFSET UNITYSDK_OFFSET(0x167EF8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageController___c__DisplayClass16_1_TypeDefinitionIndex = 63016;

	template <typename T>
	class UIVRBossBattlePageController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__5(::IFMDDIOEJGI preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFMDDIOEJGI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__5_OFFSET))(this, preview);
		}

		::System::Boolean _OnShow_b__6(::IFMDDIOEJGI preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFMDDIOEJGI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONSHOW_B__6_OFFSET))(this, preview);
		}
	};
}
