#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define GIPFFGFJCBF_PBICBEEGHJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A53260)

inline static constexpr unsigned int GIPFFGFJCBF_PBICBEEGHJO_TypeDefinitionIndex = 71432;

	class GIPFFGFJCBF_PBICBEEGHJO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::GameCore::CharacterHUDType OAMPOPJGNNG; // 0x18
		::System::Int32 GMDBHJKEAEI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_PBICBEEGHJO_CTOR_OFFSET))(this);
		}

	};
