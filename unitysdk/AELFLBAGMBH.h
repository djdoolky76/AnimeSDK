#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define AELFLBAGMBH_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x18DA5C90)
#define AELFLBAGMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA5640)
#define AELFLBAGMBH_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x18DA5930)
#define AELFLBAGMBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DA5680)
#define AELFLBAGMBH_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x18DA58F0)
#define AELFLBAGMBH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x18DA56D0)
#define AELFLBAGMBH_KINBJMMNDFF_OFFSET UNITYSDK_OFFSET(0x18DA5810)
#define AELFLBAGMBH_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x18DA5A30)
#define AELFLBAGMBH_PPLICPEAGOH_OFFSET UNITYSDK_OFFSET(0x18DA5990)
#define AELFLBAGMBH_TICK_OFFSET UNITYSDK_OFFSET(0x18DA5880)

inline static constexpr unsigned int AELFLBAGMBH_TypeDefinitionIndex = 57049;

	class AELFLBAGMBH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x18
		::RPG::GameCore::AdventureSkillCharacterComponent* KBDBKHPNJHC; // 0x20
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
		::RPG::GameCore::AdventureAnimStateType ECLBEOPGDOG; // 0x30
		::System::UInt32 GDMJNMFOKIO; // 0x34
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + AELFLBAGMBH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELFLBAGMBH_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AELFLBAGMBH_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + AELFLBAGMBH_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AELFLBAGMBH_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void PPLICPEAGOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AELFLBAGMBH_PPLICPEAGOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + AELFLBAGMBH_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELFLBAGMBH_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AELFLBAGMBH_TICK_OFFSET))(this, a1);
		}

		::System::Void KINBJMMNDFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELFLBAGMBH_KINBJMMNDFF_OFFSET))(this);
		}

	};
