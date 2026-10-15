#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointGeneratorConfig; }

#define RPG_GAMECORE_POINTGENERATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90FF80)
#define RPG_GAMECORE_POINTGENERATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90FF90)
#define RPG_GAMECORE_POINTGENERATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90FD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorConfig_TypeDefinitionIndex = 15625;

	class PointGeneratorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointGeneratorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointGeneratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointGeneratorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointGeneratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
