#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BezierProjectileData; }
namespace RPG::GameCore { class ProjectileBezierControlPoint; }

#define RPG_GAMECORE_BEZIERPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46B590)
#define RPG_GAMECORE_BEZIERPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46B5A0)
#define RPG_GAMECORE_BEZIERPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46B550)

namespace RPG::GameCore
{
	class BezierProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileBezierControlPoint*>* BezierControlPointList; // 0xB8
		::System::Single ParabolaRoll; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BezierProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BezierProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BezierProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BezierProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
