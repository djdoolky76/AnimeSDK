#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireMultiProjectilesBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewFireMultiProjectiles; }
namespace RPG::GameCore { class NewProjectileDataList; }

#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A92D0)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A92E0)
#define RPG_GAMECORE_NEWFIREMULTIPROJECTILES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A92A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireMultiProjectiles_TypeDefinitionIndex = 22590;

	class NewFireMultiProjectiles : public ::RPG::GameCore::FireMultiProjectilesBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::NewProjectileDataList*>* NewProjectileConfigList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NewFireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NewFireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREMULTIPROJECTILES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
