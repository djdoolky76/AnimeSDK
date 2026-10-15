#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointGeneratorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointGeneratorOnNavPathConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9100B0)
#define RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9100D0)
#define RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D910280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointGeneratorOnNavPathConfig_TypeDefinitionIndex = 15627;

	class PointGeneratorOnNavPathConfig : public ::RPG::GameCore::PointGeneratorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Source; // 0x10
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Single DistanceStart; // 0x20
		::System::Single DistanceEnd; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointGeneratorOnNavPathConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointGeneratorOnNavPathConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointGeneratorOnNavPathConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointGeneratorOnNavPathConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTGENERATORONNAVPATHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
