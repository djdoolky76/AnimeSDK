#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClimbableLinearWithDetectProjectileData; }

#define RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58A410)
#define RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D58A420)
#define RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58A3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClimbableLinearWithDetectProjectileData_TypeDefinitionIndex = 15664;

	class ClimbableLinearWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::System::Boolean KeepHorizontalForward; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClimbableLinearWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLIMBABLELINEARWITHDETECTPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
