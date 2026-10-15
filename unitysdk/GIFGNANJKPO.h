#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define GIFGNANJKPO_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A34370)
#define GIFGNANJKPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A343C0)

inline static constexpr unsigned int GIFGNANJKPO_TypeDefinitionIndex = 57655;

	class GIFGNANJKPO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Boolean HBKECKOILDK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFGNANJKPO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFGNANJKPO_CLEAR_OFFSET))(this);
		}

	};
