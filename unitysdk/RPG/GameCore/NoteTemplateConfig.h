#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NoteTemplateConfig; }

#define RPG_GAMECORE_NOTETEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8ACDD0)
#define RPG_GAMECORE_NOTETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8ACD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteTemplateConfig_TypeDefinitionIndex = 16973;

	class NoteTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTETEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
