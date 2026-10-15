#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanBlessWeightModifyConfig; }

#define RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5CEF0)
#define RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5CEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanBlessWeightModifyConfig_TypeDefinitionIndex = 18014;

	class TitanBlessWeightModifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TitanBlessWeightModifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TitanBlessWeightModifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANBLESSWEIGHTMODIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
