#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleStateTemplatePreviewConfig; }

#define RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7650)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateTemplatePreviewConfig_TypeDefinitionIndex = 16316;

	class FreeStyleStateTemplatePreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleStateTemplatePreviewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleStateTemplatePreviewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATEPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
