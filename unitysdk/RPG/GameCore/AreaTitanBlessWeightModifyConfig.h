#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AreaTitanBlessWeightModifyConfig; }

#define RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CAB10)
#define RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CAAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AreaTitanBlessWeightModifyConfig_TypeDefinitionIndex = 18013;

	class AreaTitanBlessWeightModifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AreaTitanBlessWeightModifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AreaTitanBlessWeightModifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREATITANBLESSWEIGHTMODIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
