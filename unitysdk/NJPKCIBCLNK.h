#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define NJPKCIBCLNK_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xBC2B260)
#define NJPKCIBCLNK_BJKIAIDLOML_OFFSET UNITYSDK_OFFSET(0xBC2B510)
#define NJPKCIBCLNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2AB50)
#define NJPKCIBCLNK_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBC2B1B0)
#define NJPKCIBCLNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC2AB60)
#define NJPKCIBCLNK_GJCHKJEHMHI_OFFSET UNITYSDK_OFFSET(0xBC2ABB0)
#define NJPKCIBCLNK_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xBC2B160)
#define NJPKCIBCLNK_ICOMBBICKHC_OFFSET UNITYSDK_OFFSET(0xBC2B050)
#define NJPKCIBCLNK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBC2ACC0)
#define NJPKCIBCLNK_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBC2B210)
#define NJPKCIBCLNK_TICK_OFFSET UNITYSDK_OFFSET(0xBC2B4B0)

	class NJPKCIBCLNK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::System::Boolean IMOAEHGJKDB; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_TICK_OFFSET))(this, a1);
		}

		::System::Void ICOMBBICKHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_ICOMBBICKHC_OFFSET))(this);
		}

		::System::Void GJCHKJEHMHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_GJCHKJEHMHI_OFFSET))(this);
		}

		::System::Void BJKIAIDLOML(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NJPKCIBCLNK_BJKIAIDLOML_OFFSET))(this, a1, a2, a3);
		}

	};
