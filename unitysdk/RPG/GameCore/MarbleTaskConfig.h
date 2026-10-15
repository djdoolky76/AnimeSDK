#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleTaskConfig; }

#define RPG_GAMECORE_MARBLETASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D836140)
#define RPG_GAMECORE_MARBLETASKCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D849390)
#define RPG_GAMECORE_MARBLETASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D849330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTaskConfig_TypeDefinitionIndex = 16827;

	class MarbleTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
