#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmNoteTemplateConfig; }

#define RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CDC00)
#define RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CDBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmNoteTemplateConfig_TypeDefinitionIndex = 16970;

	class MusicRhythmNoteTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmNoteTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmNoteTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMNOTETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
