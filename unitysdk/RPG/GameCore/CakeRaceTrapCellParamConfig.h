#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTrapCellParamConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D525CF0)
#define RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D525BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTrapCellParamConfig_TypeDefinitionIndex = 18412;

	class CakeRaceTrapCellParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::System::UInt32 Param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTrapCellParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTrapCellParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
