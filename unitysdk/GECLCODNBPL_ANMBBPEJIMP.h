#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGMLJMLDCCG;
namespace RPG::GameCore { class GameEntity; }

#define GECLCODNBPL_ANMBBPEJIMP_CTOR_OFFSET UNITYSDK_OFFSET(0x159C7590)

inline static constexpr unsigned int GECLCODNBPL_ANMBBPEJIMP_TypeDefinitionIndex = 71405;

	class GECLCODNBPL_ANMBBPEJIMP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::NGMLJMLDCCG* CEFDCEHLEFJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_ANMBBPEJIMP_CTOR_OFFSET))(this);
		}

	};
