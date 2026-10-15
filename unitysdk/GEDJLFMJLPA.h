#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define GEDJLFMJLPA_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0x159CE410)
#define GEDJLFMJLPA_CTOR_OFFSET UNITYSDK_OFFSET(0x159CD9D0)
#define GEDJLFMJLPA_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x159CE770)
#define GEDJLFMJLPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159CD9E0)
#define GEDJLFMJLPA_ECACCKIIFDJ_OFFSET UNITYSDK_OFFSET(0x159CDFD0)
#define GEDJLFMJLPA_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x159CDA30)
#define GEDJLFMJLPA_IKFLABIOPCP_OFFSET UNITYSDK_OFFSET(0x159CE280)
#define GEDJLFMJLPA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x159CDA80)
#define GEDJLFMJLPA_LADODFGKKFB_OFFSET UNITYSDK_OFFSET(0x159CDEE0)
#define GEDJLFMJLPA_LPDKOBEPFBG_OFFSET UNITYSDK_OFFSET(0x159CE340)
#define GEDJLFMJLPA_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x159CDE40)
#define GEDJLFMJLPA_TICK_OFFSET UNITYSDK_OFFSET(0x159CDB00)

	class GEDJLFMJLPA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::ILHNCGGCBBL* ONBOGBCKHDC; // 0x18
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
		::System::Boolean DOLKJLLAJBN; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single BCBNCNADPEH; // 0x2C
		::System::Single PLNLGLNFKGM; // 0x30
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_TICK_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void LPDKOBEPFBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_LPDKOBEPFBG_OFFSET))(this);
		}

		::System::Void IKFLABIOPCP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_IKFLABIOPCP_OFFSET))(this, a1);
		}

		::System::Void LADODFGKKFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_LADODFGKKFB_OFFSET))(this);
		}

		::System::Void ECACCKIIFDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDJLFMJLPA_ECACCKIIFDJ_OFFSET))(this);
		}

	};
