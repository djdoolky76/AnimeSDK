#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameRequireMissionInfo; }

#define RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8490)
#define RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B83D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameRequireMissionInfo_TypeDefinitionIndex = 17340;

	class LittleGameRequireMissionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* RequireSubMissionIDList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameRequireMissionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameRequireMissionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEREQUIREMISSIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
