#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EditorPropTagComponentOverrideConfig; }

#define RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62E480)
#define RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D62E440)

namespace RPG::GameCore
{
	class EditorPropTagComponentOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EditorPropTagComponentOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EditorPropTagComponentOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORPROPTAGCOMPONENTOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
