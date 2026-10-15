#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FireMultiProjectilesBase; }
namespace RPG::GameCore { class ProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREMULTIPROJECTILESBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ABB10)
#define RPG_GAMECORE_FIREMULTIPROJECTILESBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ABCD0)
#define RPG_GAMECORE_FIREMULTIPROJECTILESBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ABB20)

namespace RPG::GameCore
{
	class FireMultiProjectilesBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean WaitProjectileFinish; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ProjectileOnHitList*>* ProjectileOnHitList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILESBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILESBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILESBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
