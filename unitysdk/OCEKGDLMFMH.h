#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define OCEKGDLMFMH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5DED0)

inline static constexpr unsigned int OCEKGDLMFMH_TypeDefinitionIndex = 72024;

	class OCEKGDLMFMH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Boolean CBBJMGIDFHD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEKGDLMFMH_CTOR_OFFSET))(this);
		}

	};
