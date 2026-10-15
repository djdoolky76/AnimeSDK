#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PMPMKGFGICF_FONPCFNFCEM_CTOR_OFFSET UNITYSDK_OFFSET(0xC329540)

inline static constexpr unsigned int PMPMKGFGICF_FONPCFNFCEM_TypeDefinitionIndex = 71482;

	class PMPMKGFGICF_FONPCFNFCEM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Int32 GMDBHJKEAEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPMKGFGICF_FONPCFNFCEM_CTOR_OFFSET))(this);
		}

	};
