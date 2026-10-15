#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchPropSceneObjClickHintAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45480)
#define RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB454B0)
#define RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB45430)

namespace RPG::GameCore
{
	class SwitchPropSceneObjClickHintAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AttachPointIndex; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchPropSceneObjClickHintAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPROPSCENEOBJCLICKHINTATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
