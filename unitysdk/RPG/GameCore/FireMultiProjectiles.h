#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FireMultiProjectiles; }
namespace RPG::GameCore { class ProjectileDataList; }

#define RPG_GAMECORE_FIREMULTIPROJECTILES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67DDF0)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D67DE00)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D67DDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireMultiProjectiles_TypeDefinitionIndex = 22589;

	class FireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectilesBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileDataList*>* ProjectileConfigList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
