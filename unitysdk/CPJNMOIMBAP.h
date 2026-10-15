#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGKIPOLPACC.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CPJNMOIMBAP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD87A0)
#define CPJNMOIMBAP_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xDCD87B0)
#define CPJNMOIMBAP_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xDCD8800)

inline static constexpr unsigned int CPJNMOIMBAP_TypeDefinitionIndex = 55847;

	class CPJNMOIMBAP : public ::JGKIPOLPACC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + CPJNMOIMBAP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNMOIMBAP_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CPJNMOIMBAP_OPCKNBHNBOA_OFFSET))(this, a1);
		}

	};
