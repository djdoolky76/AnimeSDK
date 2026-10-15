#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifySP; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D898920)
#define RPG_GAMECORE_MODIFYSP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D898930)
#define RPG_GAMECORE_MODIFYSP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8988E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySP_TypeDefinitionIndex = 23564;

	class ModifySP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Boolean IgnoreBlock; // 0x30
		::System::Boolean SyncToSummoner; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifySP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifySP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
