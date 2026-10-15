#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BPIAOGPMLEI_EIEGKCFEBPC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A6060)

inline static constexpr unsigned int BPIAOGPMLEI_EIEGKCFEBPC_TypeDefinitionIndex = 71789;

	class BPIAOGPMLEI_EIEGKCFEBPC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Boolean NKELNPKIIHF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIAOGPMLEI_EIEGKCFEBPC_CTOR_OFFSET))(this);
		}

	};
