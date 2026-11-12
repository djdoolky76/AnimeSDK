#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierChangeRoleByRandomPosConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYRANDOMPOSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E940800)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYRANDOMPOSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E940810)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYRANDOMPOSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9407C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierChangeRoleByRandomPosConfig_TypeDefinitionIndex = 19695;

	class GridFightModifierChangeRoleByRandomPosConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYRANDOMPOSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRoleByRandomPosConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRoleByRandomPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYRANDOMPOSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierChangeRoleByRandomPosConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierChangeRoleByRandomPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYRANDOMPOSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
