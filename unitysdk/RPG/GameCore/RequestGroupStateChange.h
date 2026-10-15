#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RequestGroupStateChange; }

#define RPG_GAMECORE_REQUESTGROUPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9890E0)
#define RPG_GAMECORE_REQUESTGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9890F0)
#define RPG_GAMECORE_REQUESTGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9890A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestGroupStateChange_TypeDefinitionIndex = 20724;

	class RequestGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetState; // 0x18
		::System::Boolean NeedBlock; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTGROUPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTGROUPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTGROUPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
