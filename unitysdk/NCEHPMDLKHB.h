#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCGKGFAJMGM.h"
class OHHPOGMFPBF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewAdventureFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define NCEHPMDLKHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0A570)
#define NCEHPMDLKHB_EEKEIPKOEKN_OFFSET UNITYSDK_OFFSET(0xBB0A680)

inline static constexpr unsigned int NCEHPMDLKHB_TypeDefinitionIndex = 58235;

	class NCEHPMDLKHB : public ::NCGKGFAJMGM
	{
	public:
		::RPG::GameCore::NewAdventureFireProjectile* PBGHFKLFOHD; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + NCEHPMDLKHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EEKEIPKOEKN(::RPG::GameCore::GameEntity* a1, ::OHHPOGMFPBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + NCEHPMDLKHB_EEKEIPKOEKN_OFFSET))(this, a1, a2);
		}

	};
