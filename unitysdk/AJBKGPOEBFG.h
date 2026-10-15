#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatTaskState.h"
#include "unitysdk/System/Object.h"

#define AJBKGPOEBFG_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1C58B9A0)
#define AJBKGPOEBFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C58B8E0)
#define AJBKGPOEBFG_FAPNDMMBKLN_OFFSET UNITYSDK_OFFSET(0x1C58B8F0)
#define AJBKGPOEBFG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C58B940)

	class AJBKGPOEBFG : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::DiceCombatCore::DiceCombatTaskState DLNIGFGLPLJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBKGPOEBFG_CTOR_OFFSET))(this);
		}

		::System::Void FAPNDMMBKLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBKGPOEBFG_FAPNDMMBKLN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJBKGPOEBFG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::LittleGameShare::DiceCombatCore::DiceCombatTaskState BGDKFHEBDFJ()
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatTaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBKGPOEBFG_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
