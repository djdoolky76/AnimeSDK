#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/System/Object.h"
class CFHHJFCIJLN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }

#define JPFJJLEPGBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F8810)

inline static constexpr unsigned int JPFJJLEPGBC_TypeDefinitionIndex = 61906;

	class JPFJJLEPGBC : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* PDKOBKPIBPN; // 0x10
		::RPG::GameCore::GameEntity* FJOOMFDMEMP; // 0x18
		::CFHHJFCIJLN* FLFBHNPIDCO; // 0x20
		::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x28
		::RPG::GameCore::LevelLittleGameInfo* OPDHLLIJDCM; // 0x30
		::System::Boolean EOAGFJNAACO; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LittleGameType DLFHABGGHFF; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFJJLEPGBC_CTOR_OFFSET))(this);
		}

	};
