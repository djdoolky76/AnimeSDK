#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayOrigamiFinishTalk; }

#define RPG_GAMECORE_PLAYORIGAMIFINISHTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D901FA0)
#define RPG_GAMECORE_PLAYORIGAMIFINISHTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D901FB0)
#define RPG_GAMECORE_PLAYORIGAMIFINISHTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D901EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayOrigamiFinishTalk_TypeDefinitionIndex = 22077;

	class PlayOrigamiFinishTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMIFINISHTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayOrigamiFinishTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayOrigamiFinishTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMIFINISHTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayOrigamiFinishTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayOrigamiFinishTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYORIGAMIFINISHTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
