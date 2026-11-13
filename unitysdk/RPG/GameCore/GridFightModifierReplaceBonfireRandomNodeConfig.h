#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceBonfireRandomNodeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIRERANDOMNODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BAD70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIRERANDOMNODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BAD80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIRERANDOMNODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BAD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceBonfireRandomNodeConfig_TypeDefinitionIndex = 19670;

	class GridFightModifierReplaceBonfireRandomNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIRERANDOMNODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceBonfireRandomNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceBonfireRandomNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIRERANDOMNODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceBonfireRandomNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceBonfireRandomNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACEBONFIRERANDOMNODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
