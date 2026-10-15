#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGKIPOLPACC.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CNLEPDKOPFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA58D60)
#define CNLEPDKOPFJ_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xDA58D70)

inline static constexpr unsigned int CNLEPDKOPFJ_TypeDefinitionIndex = 55862;

	class CNLEPDKOPFJ : public ::JGKIPOLPACC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + CNLEPDKOPFJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEPDKOPFJ_GOHDHIMMDNG_OFFSET))(this);
		}

	};
