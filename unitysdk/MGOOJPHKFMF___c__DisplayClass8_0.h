#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"
class LKFPICOFNDF;

#define MGOOJPHKFMF___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB92CF50)
#define MGOOJPHKFMF___C__DISPLAYCLASS8_0__GETBUFFS_B__0_OFFSET UNITYSDK_OFFSET(0xB92CFD0)

inline static constexpr unsigned int MGOOJPHKFMF___c__DisplayClass8_0_TypeDefinitionIndex = 77807;

	class MGOOJPHKFMF___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBattleBuffType buffType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOOJPHKFMF___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuffs_b__0(::LKFPICOFNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + MGOOJPHKFMF___C__DISPLAYCLASS8_0__GETBUFFS_B__0_OFFSET))(this, a1);
		}

	};
