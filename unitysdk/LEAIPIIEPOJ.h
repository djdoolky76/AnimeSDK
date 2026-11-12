#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define LEAIPIIEPOJ_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xBEE0570)
#define LEAIPIIEPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE0030)
#define LEAIPIIEPOJ_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBEE07A0)
#define LEAIPIIEPOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE0070)
#define LEAIPIIEPOJ_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xBEE0520)
#define LEAIPIIEPOJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBEE03E0)
#define LEAIPIIEPOJ_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBEE0480)
#define LEAIPIIEPOJ_PPLICPEAGOH_OFFSET UNITYSDK_OFFSET(0xBEE0800)
#define LEAIPIIEPOJ_TICK_OFFSET UNITYSDK_OFFSET(0xBEE00C0)

inline static constexpr unsigned int LEAIPIIEPOJ_TypeDefinitionIndex = 57051;

	class LEAIPIIEPOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::RPG::GameCore::AdventureSkillCharacterComponent* KBDBKHPNJHC; // 0x28
		::System::Boolean ICKNNOCPJCE; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 GDMJNMFOKIO; // 0x34
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_TICK_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void PPLICPEAGOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEAIPIIEPOJ_PPLICPEAGOH_OFFSET))(this, a1);
		}

	};
