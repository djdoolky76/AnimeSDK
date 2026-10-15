#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define JPNJHLCHJJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CE4E0)
#define JPNJHLCHJJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CE480)

	class JPNJHLCHJJM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* CGNJAJMEKOI; // 0x10
		::KFELGAIGHAP* NKCKAJPAJCJ; // 0x18
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
		::System::Single OIKGNPCGODF; // 0x28
		::System::Single PNJEGPAFNCI; // 0x2C
		::System::Boolean CAIBGHMMDKC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNJHLCHJJM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNJHLCHJJM_DISPOSE_OFFSET))(this);
		}

	};
