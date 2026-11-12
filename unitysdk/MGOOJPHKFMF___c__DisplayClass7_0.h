#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"
class LKFPICOFNDF;

#define MGOOJPHKFMF___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC1E0610)
#define MGOOJPHKFMF___C__DISPLAYCLASS7_0__HASBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xC1E08B0)

inline static constexpr unsigned int MGOOJPHKFMF___c__DisplayClass7_0_TypeDefinitionIndex = 80541;

	class MGOOJPHKFMF___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBattleBuffType buffType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOOJPHKFMF___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasBuff_b__0(::LKFPICOFNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + MGOOJPHKFMF___C__DISPLAYCLASS7_0__HASBUFF_B__0_OFFSET))(this, a1);
		}

	};
