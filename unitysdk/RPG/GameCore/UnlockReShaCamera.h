#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnlockReShaCamera; }

#define RPG_GAMECORE_UNLOCKRESHACAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4ABE0)
#define RPG_GAMECORE_UNLOCKRESHACAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC4ABF0)
#define RPG_GAMECORE_UNLOCKRESHACAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4AB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockReShaCamera_TypeDefinitionIndex = 22029;

	class UnlockReShaCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockReShaCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockReShaCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnlockReShaCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnlockReShaCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
