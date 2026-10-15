#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupEditorDefaultConfig; }

#define RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFB10)
#define RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupEditorDefaultConfig_TypeDefinitionIndex = 17414;

	class LevelGroupEditorDefaultConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupEditorDefaultConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupEditorDefaultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
