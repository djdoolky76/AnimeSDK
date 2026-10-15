#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define CDPMBEPDHIG_BJLDMFEPHJG_OFFSET UNITYSDK_OFFSET(0xC779160)
#define CDPMBEPDHIG_CLEAR_OFFSET UNITYSDK_OFFSET(0xC779110)
#define CDPMBEPDHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC779270)

inline static constexpr unsigned int CDPMBEPDHIG_TypeDefinitionIndex = 54124;

	class CDPMBEPDHIG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPMBEPDHIG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPMBEPDHIG_CLEAR_OFFSET))(this);
		}

		::System::Void BJLDMFEPHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDPMBEPDHIG_BJLDMFEPHJG_OFFSET))(this);
		}

	};
