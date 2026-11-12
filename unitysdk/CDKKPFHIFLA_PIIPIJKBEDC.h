#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define CDKKPFHIFLA_PIIPIJKBEDC_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D6E40)

inline static constexpr unsigned int CDKKPFHIFLA_PIIPIJKBEDC_TypeDefinitionIndex = 74057;

	class CDKKPFHIFLA_PIIPIJKBEDC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Boolean PKLFLANJCDG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKKPFHIFLA_PIIPIJKBEDC_CTOR_OFFSET))(this);
		}

	};
