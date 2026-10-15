#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define JPNJHLCHJJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C7AB0)
#define JPNJHLCHJJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2C7A50)

inline static constexpr unsigned int JPNJHLCHJJM_TypeDefinitionIndex = 55258;

	class JPNJHLCHJJM : public ::System::Object
	{
	public:
		::KFELGAIGHAP* NKCKAJPAJCJ; // 0x10
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x18
		::RPG::GameCore::GameEntityList* CGNJAJMEKOI; // 0x20
		::System::Single OIKGNPCGODF; // 0x28
		::System::Boolean CAIBGHMMDKC; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single PNJEGPAFNCI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNJHLCHJJM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNJHLCHJJM_DISPOSE_OFFSET))(this);
		}

	};
