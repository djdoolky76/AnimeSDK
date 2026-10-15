#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJsonList; }
namespace RPG::GameCore { class SetAudienceGroupVisible; }

#define RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA95440)
#define RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA95450)
#define RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA95410)

namespace RPG::GameCore
{
	class SetAudienceGroupVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicJsonList* GroupMemberList; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAudienceGroupVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAudienceGroupVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAudienceGroupVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAudienceGroupVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIENCEGROUPVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
