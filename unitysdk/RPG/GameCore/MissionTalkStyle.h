#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionTalkStyleType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionTalkStyle; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONTALKSTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D889E20)
#define RPG_GAMECORE_MISSIONTALKSTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D889CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionTalkStyle_TypeDefinitionIndex = 23806;

	class MissionTalkStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionTalkStyleType StyleType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SpeakerID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONTALKSTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionTalkStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionTalkStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONTALKSTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
