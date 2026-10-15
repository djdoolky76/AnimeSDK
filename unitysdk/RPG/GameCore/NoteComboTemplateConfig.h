#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NoteComboTemplateConfig; }

#define RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AC020)
#define RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8ABFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteComboTemplateConfig_TypeDefinitionIndex = 16971;

	class NoteComboTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteComboTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteComboTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
