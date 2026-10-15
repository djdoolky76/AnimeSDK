#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareProjectileLifetime; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49B270)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49B4A0)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49B470)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49B280)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49B240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareProjectileLifetime_TypeDefinitionIndex = 20246;

	class ByCompareProjectileLifetime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
