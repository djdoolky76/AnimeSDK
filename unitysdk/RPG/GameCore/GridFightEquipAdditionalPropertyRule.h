#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipAdditionalPropertyRule; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72C240)
#define RPG_GAMECORE_GRIDFIGHTEQUIPADDITIONALPROPERTYRULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D72C200)

namespace RPG::GameCore
{
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
