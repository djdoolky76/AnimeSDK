#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/RPG/GameCore/TimelineWrapMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayTimeline; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D904A20)
#define RPG_GAMECORE_PLAYTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D904A30)
#define RPG_GAMECORE_PLAYTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9049E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTimeline_TypeDefinitionIndex = 20623;

	class PlayTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::RPG::GameCore::TimelineType Type; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* Parameters; // 0x28
		::System::Boolean ReleaseVolume; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::TimelineWrapMode WrapMode; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
