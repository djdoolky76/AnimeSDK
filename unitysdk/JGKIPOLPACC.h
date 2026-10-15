#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define JGKIPOLPACC_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xB194F00)
#define JGKIPOLPACC_CTOR_OFFSET UNITYSDK_OFFSET(0xB194CE0)
#define JGKIPOLPACC_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB195190)
#define JGKIPOLPACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB194CF0)
#define JGKIPOLPACC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB194DA0)
#define JGKIPOLPACC_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xB194EB0)
#define JGKIPOLPACC_TICK_OFFSET UNITYSDK_OFFSET(0xB194D40)

inline static constexpr unsigned int JGKIPOLPACC_TypeDefinitionIndex = 55861;

	class JGKIPOLPACC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + JGKIPOLPACC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKIPOLPACC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGKIPOLPACC_TICK_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGKIPOLPACC_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + JGKIPOLPACC_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKIPOLPACC_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGKIPOLPACC_DFFCHNLKELO_OFFSET))(this, a1);
		}

	};
