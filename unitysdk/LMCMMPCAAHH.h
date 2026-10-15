#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLJLNCHJHB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LMCMMPCAAHH_CLEAR_OFFSET UNITYSDK_OFFSET(0xB773E30)
#define LMCMMPCAAHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB773E80)

inline static constexpr unsigned int LMCMMPCAAHH_TypeDefinitionIndex = 55690;

	class LMCMMPCAAHH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::INLJLNCHJHB GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCMMPCAAHH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCMMPCAAHH_CLEAR_OFFSET))(this);
		}

	};
