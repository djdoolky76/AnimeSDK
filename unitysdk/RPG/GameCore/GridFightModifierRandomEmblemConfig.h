#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRandomEmblemConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEMBLEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BAAD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEMBLEMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BAAE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEMBLEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BAA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomEmblemConfig_TypeDefinitionIndex = 19778;

	class GridFightModifierRandomEmblemConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEMBLEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomEmblemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomEmblemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEMBLEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomEmblemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomEmblemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEMBLEMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
