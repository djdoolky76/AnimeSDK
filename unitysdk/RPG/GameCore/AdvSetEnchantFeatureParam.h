#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetEnchantFeatureParam; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AFAD0)
#define RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AFAE0)
#define RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AFAA0)

namespace RPG::GameCore
{
	class AdvSetEnchantFeatureParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StartChaseDistance; // 0x18
		::RPG::GameCore::DynamicFloat* StopChaseDistance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetEnchantFeatureParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetEnchantFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetEnchantFeatureParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetEnchantFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
