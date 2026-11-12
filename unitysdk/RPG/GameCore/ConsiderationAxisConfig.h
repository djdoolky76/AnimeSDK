#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConsiderationAxisConfig; }

#define RPG_GAMECORE_CONSIDERATIONAXISCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E91D0)
#define RPG_GAMECORE_CONSIDERATIONAXISCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7E9170)
#define RPG_GAMECORE_CONSIDERATIONAXISCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7E8B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsiderationAxisConfig_TypeDefinitionIndex = 15659;

	class ConsiderationAxisConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSIDERATIONAXISCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsiderationAxisConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsiderationAxisConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSIDERATIONAXISCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsiderationAxisConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsiderationAxisConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSIDERATIONAXISCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
