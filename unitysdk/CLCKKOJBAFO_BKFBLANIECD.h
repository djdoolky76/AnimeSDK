#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define CLCKKOJBAFO_BKFBLANIECD_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B4F80)

inline static constexpr unsigned int CLCKKOJBAFO_BKFBLANIECD_TypeDefinitionIndex = 73790;

	class CLCKKOJBAFO_BKFBLANIECD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_BKFBLANIECD_CTOR_OFFSET))(this);
		}

	};
