#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LinearProjectileData; }

#define RPG_GAMECORE_LINEARPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A49D0)
#define RPG_GAMECORE_LINEARPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A4A40)
#define RPG_GAMECORE_LINEARPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A4940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LinearProjectileData_TypeDefinitionIndex = 15659;

	class LinearProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xB8
		::System::Single TargetDistanceOffset; // 0xC0
		::System::Single HitEffectDistanceOffset; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LinearProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LinearProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LinearProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LinearProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
