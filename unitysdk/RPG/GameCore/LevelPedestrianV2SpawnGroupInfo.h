#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C0E50)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C0E60)
#define RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C97B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2SpawnGroupInfo_TypeDefinitionIndex = 17320;

	class LevelPedestrianV2SpawnGroupInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2SPAWNGROUPINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
