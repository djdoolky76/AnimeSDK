#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define AELFLBAGMBH_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xCF019A0)
#define AELFLBAGMBH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF01350)
#define AELFLBAGMBH_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xCF01640)
#define AELFLBAGMBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF01390)
#define AELFLBAGMBH_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xCF01600)
#define AELFLBAGMBH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xCF013E0)
#define AELFLBAGMBH_KINBJMMNDFF_OFFSET UNITYSDK_OFFSET(0xCF01520)
#define AELFLBAGMBH_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xCF01740)
#define AELFLBAGMBH_PPLICPEAGOH_OFFSET UNITYSDK_OFFSET(0xCF016A0)
#define AELFLBAGMBH_TICK_OFFSET UNITYSDK_OFFSET(0xCF01590)

	class AELFLBAGMBH : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x20
		::RPG::GameCore::AdventureSkillCharacterComponent* KBDBKHPNJHC; // 0x28
		::System::UInt32 GDMJNMFOKIO; // 0x30
		::RPG::GameCore::AdventureAnimStateType ECLBEOPGDOG; // 0x34
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
