#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleStateTemplateCharacterConfig; }

#define RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4F80)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4F40)

namespace RPG::GameCore
{
	class FreeStyleStateTemplateCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleStateTemplateCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleStateTemplateCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
