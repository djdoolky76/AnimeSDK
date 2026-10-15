#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireWaveProjectileBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewFireWaveProjectile; }
namespace RPG::GameCore { class NewProjectileConfig; }

#define RPG_GAMECORE_NEWFIREWAVEPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A9A30)
#define RPG_GAMECORE_NEWFIREWAVEPROJECTILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A9A40)
#define RPG_GAMECORE_NEWFIREWAVEPROJECTILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A99F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireWaveProjectile_TypeDefinitionIndex = 22584;

	class NewFireWaveProjectile : public ::RPG::GameCore::FireWaveProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREWAVEPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewFireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewFireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREWAVEPROJECTILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewFireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewFireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREWAVEPROJECTILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
