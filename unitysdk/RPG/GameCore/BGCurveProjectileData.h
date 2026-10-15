#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BGCURVEPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D435630)
#define RPG_GAMECORE_BGCURVEPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4356A0)
#define RPG_GAMECORE_BGCURVEPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4355A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BGCurveProjectileData_TypeDefinitionIndex = 15670;

	class BGCurveProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* SubCurveIndex; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BGCurveProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BGCurveProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BGCurveProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BGCurveProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
