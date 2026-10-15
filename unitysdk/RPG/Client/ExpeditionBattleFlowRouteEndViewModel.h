#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNFKIEAGDHL;
namespace RPG::Client { class ExpeditionBattleRoute; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCE46B70)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_GET_BATTLEUSEROUND_OFFSET UNITYSDK_OFFSET(0xCE46B20)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_GET_ISROUTEWIN_OFFSET UNITYSDK_OFFSET(0xCE46A80)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_GET_LEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE46AD0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_ISALLAVATARDEAD_OFFSET UNITYSDK_OFFSET(0xCE46C50)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_ISAVATARDEAD_OFFSET UNITYSDK_OFFSET(0xCE46B80)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowRouteEndViewModel_TypeDefinitionIndex = 63915;

	class ExpeditionBattleFlowRouteEndViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionBattleRoute* _Route; // 0x10
		::GNFKIEAGDHL* _RouteEnd; // 0x18
		::System::Void _ctor(::GNFKIEAGDHL* a1, ::RPG::Client::ExpeditionBattleRoute* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNFKIEAGDHL*, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsRouteWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_GET_ISROUTEWIN_OFFSET))(this);
		}

		::System::UInt32 get_LevelProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_GET_LEVELPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_BattleUseRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_GET_BATTLEUSEROUND_OFFSET))(this);
		}

		::System::Boolean IsAvatarDead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_ISAVATARDEAD_OFFSET))(this, a1);
		}

		::System::Boolean IsAllAvatarDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWROUTEENDVIEWMODEL_ISALLAVATARDEAD_OFFSET))(this);
		}

	};
}
