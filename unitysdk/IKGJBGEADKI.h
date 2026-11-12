#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define IKGJBGEADKI_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x1745FA50)
#define IKGJBGEADKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1745F490)
#define IKGJBGEADKI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1745FE10)
#define IKGJBGEADKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1745F4A0)
#define IKGJBGEADKI_ECACCKIIFDJ_OFFSET UNITYSDK_OFFSET(0x1745F5B0)
#define IKGJBGEADKI_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x1745F4F0)
#define IKGJBGEADKI_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1745F540)
#define IKGJBGEADKI_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1745F860)
#define IKGJBGEADKI_TICK_OFFSET UNITYSDK_OFFSET(0x1745F940)

inline static constexpr unsigned int IKGJBGEADKI_TypeDefinitionIndex = 57058;

	class IKGJBGEADKI : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x10
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + IKGJBGEADKI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGJBGEADKI_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGJBGEADKI_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKGJBGEADKI_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + IKGJBGEADKI_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKGJBGEADKI_TICK_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGJBGEADKI_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKGJBGEADKI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void ECACCKIIFDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGJBGEADKI_ECACCKIIFDJ_OFFSET))(this);
		}

	};
