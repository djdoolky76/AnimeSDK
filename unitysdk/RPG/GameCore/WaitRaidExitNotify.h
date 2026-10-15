#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class WaitRaidExitNotify; }

#define RPG_GAMECORE_WAITRAIDEXITNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9F990)
#define RPG_GAMECORE_WAITRAIDEXITNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9F9A0)
#define RPG_GAMECORE_WAITRAIDEXITNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9F960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRaidExitNotify_TypeDefinitionIndex = 20909;

	class WaitRaidExitNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* RaidID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRAIDEXITNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRaidExitNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRaidExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRAIDEXITNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRaidExitNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRaidExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRAIDEXITNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
