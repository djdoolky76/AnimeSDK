#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyFateLevelParam; }

#define RPG_GAMECORE_MODIFYFATELEVELPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8974D0)
#define RPG_GAMECORE_MODIFYFATELEVELPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8974E0)
#define RPG_GAMECORE_MODIFYFATELEVELPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D897490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFateLevelParam_TypeDefinitionIndex = 23289;

	class ModifyFateLevelParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateLevelParamType ValueType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyFateLevelParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyFateLevelParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyFateLevelParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyFateLevelParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
