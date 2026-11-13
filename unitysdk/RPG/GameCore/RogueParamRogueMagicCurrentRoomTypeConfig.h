#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueMagicCurrentRoomTypeConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B4ED0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B4EE0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B4E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicCurrentRoomTypeConfig_TypeDefinitionIndex = 20167;

	class RogueParamRogueMagicCurrentRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
