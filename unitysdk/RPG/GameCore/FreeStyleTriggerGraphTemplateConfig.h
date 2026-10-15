#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerGraphTemplateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5390)
#define RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F52B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerGraphTemplateConfig_TypeDefinitionIndex = 16944;

	class FreeStyleTriggerGraphTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphInfo*>* GraphTemplates; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERGRAPHTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
