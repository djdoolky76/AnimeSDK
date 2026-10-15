#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeResetMonsterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MAZERESETMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8708D0)
#define RPG_GAMECORE_MAZERESETMONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8654B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeResetMonsterConfig_TypeDefinitionIndex = 17627;

	class MazeResetMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DisappearEff; // 0x10
		::System::String* AppearEff; // 0x18
		::System::Single AppearDelay; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZERESETMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeResetMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeResetMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZERESETMONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
