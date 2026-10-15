#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BGCurveWithDetectProjectileData; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4089A0)
#define RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D408A20)
#define RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D408900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BGCurveWithDetectProjectileData_TypeDefinitionIndex = 15671;

	class BGCurveWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* SubCurveIndex; // 0xB8
		::System::Single CollisionEnableDelay; // 0xC0
		::System::Single MaxLifeTime; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BGCurveWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BGCurveWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BGCurveWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BGCurveWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
