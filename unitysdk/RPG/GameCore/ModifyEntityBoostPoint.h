#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyEntityBoostPoint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D869270)
#define RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D869280)
#define RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D869240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyEntityBoostPoint_TypeDefinitionIndex = 22605;

	class ModifyEntityBoostPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Boolean IsSilence; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyEntityBoostPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyEntityBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyEntityBoostPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyEntityBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
