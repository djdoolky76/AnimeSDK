#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define IJLMAKFOEBK_HBNMJPHFMOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1743F400)

inline static constexpr unsigned int IJLMAKFOEBK_HBNMJPHFMOI_TypeDefinitionIndex = 74326;

	class IJLMAKFOEBK_HBNMJPHFMOI : public ::System::Object
	{
	public:
		::System::Action* LHPEBLDOIMK; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_HBNMJPHFMOI_CTOR_OFFSET))(this);
		}

	};
