#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define IJLMAKFOEBK_HBNMJPHFMOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1646C9A0)

inline static constexpr unsigned int IJLMAKFOEBK_HBNMJPHFMOI_TypeDefinitionIndex = 72256;

	class IJLMAKFOEBK_HBNMJPHFMOI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Action* LHPEBLDOIMK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLMAKFOEBK_HBNMJPHFMOI_CTOR_OFFSET))(this);
		}

	};
