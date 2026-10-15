#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/IVec3.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
namespace RPG::GameCore { class GameEntity; }

#define GANBGJGFHCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2E78D50)
#define GANBGJGFHCN_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2E78D90)
#define GANBGJGFHCN_CTOR_3_OFFSET UNITYSDK_OFFSET(0x2E78DB0)
#define GANBGJGFHCN_CTOR_4_OFFSET UNITYSDK_OFFSET(0x2E78DF0)
#define GANBGJGFHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x2E78D30)

	struct alignas(8) GANBGJGFHCN
	{
		::RPG::GameCore::GameEntity* PPKKOLKCKOI; // 0x10
		::RPG::GameCore::FixVec3 BMFMHEOHAPP; // 0x18
		::RPG::IVec3 ADMAIBLHENJ; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GANBGJGFHCN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::FixVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + GANBGJGFHCN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + GANBGJGFHCN_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::RPG::IVec3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::IVec3))((::PBYTE)hIl2Cpp + GANBGJGFHCN_CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::RPG::GameCore::IVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + GANBGJGFHCN_CTOR_4_OFFSET))(this, a1);
		}

	};
