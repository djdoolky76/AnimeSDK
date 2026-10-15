#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class PointQueryConfig; }

#define RPG_GAMECORE_POINTQUERYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9103D0)
#define RPG_GAMECORE_POINTQUERYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D910310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointQueryConfig_TypeDefinitionIndex = 15624;

	class PointQueryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PointGeneratorConfig* Generator; // 0x10
		::RPG::GameCore::PointEvaluatorConfig* PointEvaluateConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTQUERYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointQueryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointQueryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTQUERYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
