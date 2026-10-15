#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupEditorDefaultConfigCollection; }

#define RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIGCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7820E0)
#define RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIGCOLLECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7820A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupEditorDefaultConfigCollection_TypeDefinitionIndex = 17415;

	class LevelGroupEditorDefaultConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIGCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupEditorDefaultConfigCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupEditorDefaultConfigCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPEDITORDEFAULTCONFIGCOLLECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
