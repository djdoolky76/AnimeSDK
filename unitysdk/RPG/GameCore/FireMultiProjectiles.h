#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FireMultiProjectiles; }
namespace RPG::GameCore { class ProjectileDataList; }

#define RPG_GAMECORE_FIREMULTIPROJECTILES_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84AB50)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E84AB60)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E84AB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireMultiProjectiles_TypeDefinitionIndex = 23004;

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
