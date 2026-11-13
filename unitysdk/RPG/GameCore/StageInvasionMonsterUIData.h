#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIStyle.h"

#define RPG_GAMECORE_STAGEINVASIONMONSTERUIDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x3D1D300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionMonsterUIData_TypeDefinitionIndex = 57392;

	struct alignas(4) StageInvasionMonsterUIData
	{
		::System::UInt32 RuntimeID; // 0x10
		::System::UInt32 InvasionLevel; // 0x14
		::RPG::Client::TextID InvasionTitle; // 0x18
		::RPG::Client::TextID InvasionDesc; // 0x28
		::RPG::GameCore::StageInvasionMonsterUIStyle UIStyle; // 0x38
		::System::Boolean IsShow; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single KillMarkRatio; // 0x40
		::RPG::GameCore::StageInvasionMonsterState State; // 0x44
		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMONSTERUIDATA_ISVALID_OFFSET))(this);
		}

	};
}
