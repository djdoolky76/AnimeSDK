#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define GJANLNGMHCO_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x15A4D880)
#define GJANLNGMHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4D600)
#define GJANLNGMHCO_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15A4DAD0)
#define GJANLNGMHCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A4D640)
#define GJANLNGMHCO_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x15A4D690)
#define GJANLNGMHCO_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15A4D6E0)
#define GJANLNGMHCO_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x15A4D730)
#define GJANLNGMHCO_TICK_OFFSET UNITYSDK_OFFSET(0x15A4D7B0)

inline static constexpr unsigned int GJANLNGMHCO_TypeDefinitionIndex = 55852;

	class GJANLNGMHCO : public ::System::Object
	{
	public:
		::RPG::GameCore::FreeStyleComponent* JHFKOHNKLMH; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x20
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + GJANLNGMHCO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANLNGMHCO_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANLNGMHCO_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJANLNGMHCO_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + GJANLNGMHCO_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJANLNGMHCO_TICK_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANLNGMHCO_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJANLNGMHCO_DFFCHNLKELO_OFFSET))(this, a1);
		}

	};
