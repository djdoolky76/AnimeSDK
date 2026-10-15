#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DetachAvatarChange; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DETACHAVATARCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FDC30)
#define RPG_GAMECORE_DETACHAVATARCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FDC40)
#define RPG_GAMECORE_DETACHAVATARCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FDBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DetachAvatarChange_TypeDefinitionIndex = 23613;

	class DetachAvatarChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NewAvatar; // 0x18
		::System::Boolean KillNewAvatar; // 0x20
		::System::Byte _padding0[0x1];
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DETACHAVATARCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DetachAvatarChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DetachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DETACHAVATARCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DetachAvatarChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DetachAvatarChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DETACHAVATARCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
