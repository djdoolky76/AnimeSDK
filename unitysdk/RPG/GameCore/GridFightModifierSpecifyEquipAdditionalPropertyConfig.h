#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSpecifyEquipAdditionalPropertyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D708470)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D708480)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D708430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecifyEquipAdditionalPropertyConfig_TypeDefinitionIndex = 19383;

	class GridFightModifierSpecifyEquipAdditionalPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyEquipAdditionalPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYEQUIPADDITIONALPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
