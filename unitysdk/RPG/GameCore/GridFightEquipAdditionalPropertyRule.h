#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipAdditionalPropertyRule; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E938010)
#define RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E937FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipAdditionalPropertyRule_TypeDefinitionIndex = 19605;

	class GridFightEquipAdditionalPropertyRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightEquipAdditionalPropertyRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightEquipAdditionalPropertyRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
