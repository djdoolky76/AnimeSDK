#pragma once
#include "unitysdk/unitysdk.h"
class EFHJJIGLPDL;
class NJFHGODIBPN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_SteerToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FCFFFIGAMBN_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0x165D2040)
#define FCFFFIGAMBN_CTOR_OFFSET UNITYSDK_OFFSET(0x165D1E30)
#define FCFFFIGAMBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165D1F80)
#define FCFFFIGAMBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165D21B0)
#define FCFFFIGAMBN_TICK_OFFSET UNITYSDK_OFFSET(0x165D20E0)

inline static constexpr unsigned int FCFFFIGAMBN_TypeDefinitionIndex = 53359;

	class FCFFFIGAMBN
	{
	public:
		::EFHJJIGLPDL* JHCDNHADCLE; // 0x28
		::RPG::GameCore::GameEntity* PIJPEKHJHHI; // 0x30
		::NJFHGODIBPN* HNHCPOJKNCC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SteerToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SteerToTarget*))((::PBYTE)hIl2Cpp + FCFFFIGAMBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFFFIGAMBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCFFFIGAMBN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFFFIGAMBN_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFFFIGAMBN_BOLJDDJDNII_OFFSET))(this);
		}

	};
