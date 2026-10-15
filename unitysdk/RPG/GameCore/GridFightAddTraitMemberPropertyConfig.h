#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAddTraitMemberPropertyConfig; }

#define RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F7AA0)
#define RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F7A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAddTraitMemberPropertyConfig_TypeDefinitionIndex = 19474;

	class GridFightAddTraitMemberPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAddTraitMemberPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAddTraitMemberPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTADDTRAITMEMBERPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
