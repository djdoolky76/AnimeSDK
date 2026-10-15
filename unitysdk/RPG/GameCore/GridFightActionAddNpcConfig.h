#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddNpcConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724150)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724160)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddNpcConfig_TypeDefinitionIndex = 19315;

	class GridFightActionAddNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddNpcConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddNpcConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDNPCCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
