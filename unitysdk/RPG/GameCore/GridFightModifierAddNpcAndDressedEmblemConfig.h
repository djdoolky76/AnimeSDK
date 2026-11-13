#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddNpcAndDressedEmblemConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEDEMBLEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060B500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEDEMBLEMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060B510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEDEMBLEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060B4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndDressedEmblemConfig_TypeDefinitionIndex = 19766;

	class GridFightModifierAddNpcAndDressedEmblemConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEDEMBLEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndDressedEmblemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndDressedEmblemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEDEMBLEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddNpcAndDressedEmblemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddNpcAndDressedEmblemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEDEMBLEMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
