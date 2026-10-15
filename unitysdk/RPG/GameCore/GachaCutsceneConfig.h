#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaCutsceneConfig; }
namespace RPG::GameCore { class GachaTimelineConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GACHACUTSCENECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CD6C0)
#define RPG_GAMECORE_GACHACUTSCENECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6CD520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaCutsceneConfig_TypeDefinitionIndex = 17096;

	class GachaCutsceneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TicketTrackNameSuffix; // 0x10
		::System::String* RarityTrackNameSuffix; // 0x18
		::System::String* EnviroProfile; // 0x20
		::RPG::GameCore::GachaTimelineConfig* NormalTimelineConfig; // 0x28
		::RPG::GameCore::GachaTimelineConfig* SuperRareTimelineConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACUTSCENECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GachaCutsceneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GachaCutsceneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHACUTSCENECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
