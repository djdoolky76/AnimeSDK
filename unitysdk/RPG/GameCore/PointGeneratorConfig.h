#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointGeneratorConfig; }

#define RPG_GAMECORE_POINTGENERATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93D8F0)
#define RPG_GAMECORE_POINTGENERATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93D900)
#define RPG_GAMECORE_POINTGENERATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93D690)

namespace RPG::GameCore
{
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
