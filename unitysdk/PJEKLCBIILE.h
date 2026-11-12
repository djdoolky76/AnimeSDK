#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define PJEKLCBIILE_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xCBAC2B0)
#define PJEKLCBIILE_CTOR_OFFSET UNITYSDK_OFFSET(0xCBAC0C0)
#define PJEKLCBIILE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xCBAC300)
#define PJEKLCBIILE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBAC0D0)
#define PJEKLCBIILE_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xCBAC120)
#define PJEKLCBIILE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xCBAC170)
#define PJEKLCBIILE_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xCBAC1C0)
#define PJEKLCBIILE_TICK_OFFSET UNITYSDK_OFFSET(0xCBAC210)

inline static constexpr unsigned int PJEKLCBIILE_TypeDefinitionIndex = 57054;

	class PJEKLCBIILE : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x10
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + PJEKLCBIILE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKLCBIILE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKLCBIILE_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJEKLCBIILE_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + PJEKLCBIILE_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJEKLCBIILE_TICK_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEKLCBIILE_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJEKLCBIILE_DFFCHNLKELO_OFFSET))(this, a1);
		}

	};
