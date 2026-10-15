#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RefreshFormationCenter; }

#define RPG_GAMECORE_REFRESHFORMATIONCENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9763D0)
#define RPG_GAMECORE_REFRESHFORMATIONCENTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9763E0)
#define RPG_GAMECORE_REFRESHFORMATIONCENTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9763A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshFormationCenter_TypeDefinitionIndex = 22914;

	class RefreshFormationCenter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFORMATIONCENTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshFormationCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshFormationCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFORMATIONCENTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshFormationCenter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshFormationCenter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHFORMATIONCENTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
