#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnLockCamera; }

#define RPG_GAMECORE_UNLOCKCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC44CF0)
#define RPG_GAMECORE_UNLOCKCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC44D00)
#define RPG_GAMECORE_UNLOCKCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC44C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockCamera_TypeDefinitionIndex = 20158;

	class UnLockCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
