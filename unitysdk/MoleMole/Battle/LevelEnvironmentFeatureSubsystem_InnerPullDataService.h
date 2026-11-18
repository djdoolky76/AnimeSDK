#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDNONHDGGNB.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_GET_PULLDATA_OFFSET UNITYSDK_OFFSET(0xFFB4150)
#define MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_SET_PULLDATA_OFFSET UNITYSDK_OFFSET(0xFFB4160)
#define MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB4170)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelEnvironmentFeatureSubsystem_InnerPullDataService_TypeDefinitionIndex = 75049;

	class LevelEnvironmentFeatureSubsystem_InnerPullDataService : public ::System::Object
	{
	public:
		::IDNONHDGGNB _PullData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE__CTOR_OFFSET))(this);
		}

		::IDNONHDGGNB get_PullData()
		{
			return ((::IDNONHDGGNB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_GET_PULLDATA_OFFSET))(this);
		}

		::System::Void set_PullData(::IDNONHDGGNB value)
		{
			return ((::System::Void(*)(::PVOID, ::IDNONHDGGNB))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_LEVELENVIRONMENTFEATURESUBSYSTEM_INNERPULLDATASERVICE_SET_PULLDATA_OFFSET))(this, value);
		}
	};
}
