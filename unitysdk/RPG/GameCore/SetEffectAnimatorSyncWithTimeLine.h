#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEffectAnimatorSyncWithTimeLine; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAECA0)
#define RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAECB0)
#define RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAEC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorSyncWithTimeLine_TypeDefinitionIndex = 22455;

	class SetEffectAnimatorSyncWithTimeLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::String* TimelineName; // 0x20
		::System::Single TrackTriggerNormalizedTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
