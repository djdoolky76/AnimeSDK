#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define GKPGMJMDNJD_OOAGPLNEOFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9D600)

inline static constexpr unsigned int GKPGMJMDNJD_OOAGPLNEOFN_TypeDefinitionIndex = 71761;

	class GKPGMJMDNJD_OOAGPLNEOFN : public ::System::Object
	{
	public:
		::System::Action* HJBCMCMMKBH; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPGMJMDNJD_OOAGPLNEOFN_CTOR_OFFSET))(this);
		}

	};
