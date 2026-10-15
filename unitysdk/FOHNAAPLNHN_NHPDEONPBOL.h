#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define FOHNAAPLNHN_NHPDEONPBOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x158EABA0)
#define FOHNAAPLNHN_NHPDEONPBOL_CTOR_OFFSET UNITYSDK_OFFSET(0x158EABF0)
#define FOHNAAPLNHN_NHPDEONPBOL_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0x158EA2A0)

inline static constexpr unsigned int FOHNAAPLNHN_NHPDEONPBOL_TypeDefinitionIndex = 60571;

	class FOHNAAPLNHN_NHPDEONPBOL : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelLittleGameInfo* CFDIKLBINHK; // 0x10
		::RPG::GameCore::GameEntity* BJIIHGMHHBE; // 0x18
		::System::UInt32 LLDCHLHNADA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_NHPDEONPBOL_CTOR_OFFSET))(this);
		}

		::System::UInt32 OEIIDHFBKHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_NHPDEONPBOL_OEIIDHFBKHG_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_NHPDEONPBOL_CLEAR_OFFSET))(this);
		}

	};
