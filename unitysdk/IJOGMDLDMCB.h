#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define IJOGMDLDMCB_CLEAR_OFFSET UNITYSDK_OFFSET(0x17445220)
#define IJOGMDLDMCB_CTOR_OFFSET UNITYSDK_OFFSET(0x17445270)

inline static constexpr unsigned int IJOGMDLDMCB_TypeDefinitionIndex = 56708;

	class IJOGMDLDMCB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* IEDIIFJOOGF; // 0x10
		::System::Single BIFBJDKMKDL; // 0x18
		::System::Single NMCLEENBEAL; // 0x1C
		::System::Single GBOEIMOIMJG; // 0x20
		::System::Boolean GFDBIGKJAGK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJOGMDLDMCB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJOGMDLDMCB_CLEAR_OFFSET))(this);
		}

	};
